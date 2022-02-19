[33mcommit e401ad4175d6b247ca02e3743874ae30f16352e2[m[33m ([m[1;36mHEAD -> [m[1;32mmaster[m[33m)[m
Author: r3mind3r <dyxtance@gmail.com>
Date:   Fri Feb 18 13:31:53 2022 +0200

    Upgraded reg/log for admin & reg for guest version

[1mdiff --git a/Testing System/Testing System.cpp b/Testing System/Testing System.cpp[m
[1mindex 4eb5ca3..8f2bfc7 100644[m
[1m--- a/Testing System/Testing System.cpp[m	
[1m+++ b/Testing System/Testing System.cpp[m	
[36m@@ -73,6 +73,8 @@[m [mpublic:[m
             if (verification != password)[m
             {[m
                 cout << " Пароли не совпадают! Повторите попытку:\n > ";[m
[32m+[m[32m                Sleep(2000);[m
[32m+[m[32m                system("cls");[m
             }[m
         } while (verification != password);[m
         Sleep(1000);[m
[36m@@ -85,28 +87,32 @@[m [mpublic:[m
         Sleep(1000);[m
         cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t    Здравствуйте!\n";[m
         Sleep(2000);[m
[31m-        cout << "\n\t\t\t\t\t\t    Вход в систему\n";[m
[32m+[m[32m        cout << "\t\t\t\t\t\t    Вход в систему\n";[m
         Sleep(3000);[m
         system("cls");[m
[31m-        cout << "\n    Пожалуйста, введите Ваш логин: \n > ";[m
[31m-        string userCheck;[m
[31m-        getline(cin, userCheck);[m
[31m-        cout << "    Отлично! А теперь введите пароль \n > ";[m
[31m-        string passwordCheck;[m
[31m-        getline(cin, passwordCheck);[m
 [m
         bool check;[m
         do[m
         {[m
[32m+[m[32m            cout << "\n    Пожалуйста, введите Ваш логин: \n > ";[m
[32m+[m[32m            string userCheck;[m
[32m+[m[32m            getline(cin, userCheck);[m
[32m+[m[32m            cout << "    Отлично! А теперь введите пароль \n > ";[m
[32m+[m[32m            string passwordCheck;[m
[32m+[m[32m            getline(cin, passwordCheck);[m
[32m+[m[32m            Sleep(1000);[m
[32m+[m
             if (userCheck == user && passwordCheck == password)[m
             {[m
[31m-                cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t    Поздравляем! Вход в систему успешно выполнен!\n\n\n\n\n\n\n\n\n\n\n\n\n";[m
[32m+[m[32m                cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t    Поздравляем! Вход в систему успешно выполнен!\n\n\n\n\n\n\n\n\n\n\n\n\n";[m
                 check = true;[m
             }[m
             else[m
             {[m
[31m-                cout << "\n Извините, введенные данные неверны! Попробуйте еще раз \n > ";[m
[32m+[m[32m                cout << "\n Введенные данные неверны! Попробуйте еще раз \n > ";[m
                 check = false;[m
[32m+[m[32m                Sleep(2000);[m
[32m+[m[32m                system("cls");[m
             }[m
         } while (!check);[m
     }[m
[36m@@ -367,4 +373,11 @@[m [mpublic:[m
 int main()[m
 {[m
     setlocale(LC_ALL, "rus");[m
[32m+[m[32m    Admin a;[m
[32m+[m[32m    /*a.registration();[m
[32m+[m[32m    AdminFileOperations ao;[m
[32m+[m[32m    ao.adminRecord(a);*/[m
[32m+[m[32m    AdminFileOperations ao;[m
[32m+[m[32m    ao.adminLoad(a);[m
[32m+[m[32m    a.login();[m
 }[m
\ No newline at end of file[m
[1mdiff --git a/Testing System/adminReg.bin b/Testing System/adminReg.bin[m
[1mnew file mode 100644[m
[1mindex 0000000..4aa084c[m
[1m--- /dev/null[m
[1m+++ b/Testing System/adminReg.bin[m	
[36m@@ -0,0 +1 @@[m
[32m+[m[32madminpassword[m
\ No newline at end of file[m
[1mdiff --git a/Testing System/adminSize.txt b/Testing System/adminSize.txt[m
[1mnew file mode 100644[m
[1mindex 0000000..71f9afb[m
[1m--- /dev/null[m
[1m+++ b/Testing System/adminSize.txt[m	
[36m@@ -0,0 +1,2 @@[m
[32m+[m[32m5[m
[32m+[m[32m8[m
\ No newline at end of file[m
