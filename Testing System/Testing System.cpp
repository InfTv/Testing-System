#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
using namespace std;

class Admin
{
    string user;
    string password;
public:
    void setUser(string user)
    {
        this->user = user;
    }
    string getUser()
    {
        return this->user;
    }
    void setPassword(string password)
    {
        this->password = password;
    }
    string getPassword()
    {
        return password;
    }
    void registration()
    {
        Sleep(1000);
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t    Здравствуйте!";
        Sleep(2000);
        cout << "\n\t\t\t\t\t   Это Ваш первый вход в систему";
        Sleep(3000);
        system("cls");
        cout << "\n    Пожалуйста, придумайте логин, который будет состоять не менее чем из 4 символов:\n > ";
        do
        {
            getline(cin, user);
            for (int i = 0; i < user.length(); i++)
            {
                if (user[i] == ' ')
                {
                    cout << " Логин не может содержать специальные символы! Повторите попытку:\n > ";
                }
            }
            if (user.length() < 4)
            {
                cout << " Логин не может содержать менее 4 символов! Повторите попытку:\n > ";
            }
        } while (user.length() < 4);
        Sleep(500);
        
        cout << "    Отлично! А теперь придумайте пароль, который будет содержать не менее 8 символов:\n > ";
        string verification;
        do
        {
            bool check;
            do
            {
                check = true;
                getline(cin, password);
                if (password.length() < 8)
                {
                    cout << " Пароль не может содержать менее 8 символов! Повторите попытку:\n > ";
                    check = false;
                }
            } while (!check);
            Sleep(1000);
            cout << "    Пожалуйста, введите пароль еще раз:\n > ";
            getline(cin, verification);

            if (verification != password)
            {
                cout << " Пароли не совпадают! Повторите попытку:\n > ";
            }
        } while (verification != password);
        Sleep(1000);
        system("cls");

        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t    Поздравляем, регистрация пройдена успешно!\n\n\n\n\n\n\n\n\n\n\n\n\n";
    }
    void login()
    {
        Sleep(1000);
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t    Здравствуйте!\n";
        Sleep(2000);
        cout << "\n\t\t\t\t\t\t    Вход в систему\n";
        Sleep(3000);
        system("cls");
        cout << "\n    Пожалуйста, введите Ваш логин: \n > ";
        string userCheck;
        getline(cin, userCheck);
        cout << "    Отлично! А теперь введите пароль \n > ";
        string passwordCheck;
        getline(cin, passwordCheck);

        bool check;
        do
        {
            if (userCheck == user && passwordCheck == password)
            {
                cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t    Поздравляем! Вход в систему успешно выполнен!\n\n\n\n\n\n\n\n\n\n\n\n\n";
                check = true;
            }
            else
            {
                cout << "\n Извините, введенные данные неверны! Попробуйте еще раз \n > ";
                check = false;
            }
        } while (!check);
    }
};

class Guest
{
    string user;
    string password;
    string firstName;
    string secondName;
    string lastName;
    string phone;
    string address;
public:
    void setUser(string user)
    {
        this->user = user;
    }
    string getUser()
    {
        return user;
    }
    void setPassword(string password)
    {
        this->password= password;
    }
    string getPassword()
    {
        return password;
    }
    void setFirstName(string firstName)
    {
        this->firstName = firstName;
    }
    string getFirtsName()
    {
        return firstName;
    }
    void setSecondName(string secondName)
    {
        this->secondName = secondName;
    }
    string getSecondName()
    {
        return secondName;
    }
    void setLastName(string lastName)
    {
        this->lastName = lastName;
    }
    string getLastName()
    {
        return lastName;
    }
    void setPhone(string phone)
    {
        this->phone = phone;
    }
    string getPhone()
    {
        return phone;
    }
    void setAddress(string address)
    {
        this->address = address;
    }
    string getAddress()
    {
        return address;
    }
    void registration()
    {
        Sleep(1000);
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t    Здравствуйте!";
        Sleep(2000);
        cout << "\n\t\t\t\t\t   Это Ваш первый вход в систему";
        Sleep(3000);
        system("cls");
        cout << "\n    Пожалуйста, придумайте логин, который будет состоять не менее чем из 4 символов:\n > ";
        do
        {
            getline(cin, user);
            for (int i = 0; i < user.length(); i++)
            {
                if (user[i] == ' ')
                {
                    cout << " Логин не может содержать специальные символы! Повторите попытку:\n > ";
                }
            }
            if (user.length() < 4)
            {
                cout << " Логин не может содержать менее 4 символов! Повторите попытку:\n > ";
            }
        } while (user.length() < 4);
        Sleep(500);

        cout << "    Отлично! А теперь придумайте пароль, который будет содержать не менее 8 символов:\n > ";
        string verification;
        do
        {
            bool check;
            do
            {
                check = true;
                getline(cin, password);
                if (password.length() < 8)
                {
                    cout << " Пароль не может содержать менее 8 символов! Повторите попытку:\n > ";
                    check = false;
                }
            } while (!check);
            Sleep(1000);
            cout << "    Пожалуйста, введите пароль еще раз:\n > ";
            getline(cin, verification);

            if (verification != password)
            {
                cout << " Пароли не совпадают! Повторите попытку:\n > ";
            }
        } while (verification != password);
        Sleep(1000);

        cout << "    Введите Ваши контактные данные - Фамилию:\n > ";
        getline(cin, firstName);
        Sleep(1000);
        cout << "    Имя:\n > ";
        getline(cin, secondName);
        Sleep(1000);
        cout << "    Отчество:\n > ";
        getline(cin, lastName);
        Sleep(1000);
        cout << "    Почти у цели! Теперь введите Ваш номер телефона\n    Пример: +380441234567\n > ";
        bool check = true;
        do
        {
            getline(cin, phone);
            if (phone.length() != 13)
            {
                cout << " Вы ввели некорректный номер телефона! Повторите попытку:\n > ";
                check = false;
            }
        } while (!check);
        Sleep(1000);
        cout << "    А сейчас введите Ваш домашний адрес:\n > ";
        getline(cin, address);
        Sleep(1000);
        cout << "    Подождите немного, идет завершение подготовки к использованию системы";
        for (int i = 0; i < 5; i++)
        {
            cout << ".";
            Sleep(700);
        }
        system("cls");
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t    Все готово к запуску!\n\n\n\n\n\n\n\n\n\n\n\n\n";
    }
};

class AdminFileOperations
{
public:
    const void adminRecord(Admin& a)
    {
        ofstream fout("adminReg.bin", ios_base::binary);
        ofstream foutsize("adminSize.txt");

        foutsize << a.getUser().size() << endl;
        foutsize << a.getPassword().size();
        fout.write(a.getUser().c_str(), a.getUser().size());
        fout.write(a.getPassword().c_str(), a.getPassword().size());

        foutsize.close();
        fout.close();
    }
    void adminLoad(Admin& a)
    {
        ifstream fin("adminReg.bin", ios_base::binary);
        ifstream finsize("adminSize.txt");
        char user[50] = { 0 };
        char password[50] = { 0 };
        int fuser;
        int fpasswd;
        finsize >> fuser;
        finsize >> fpasswd;
        fin.read(user, fuser);
        fin.read(password, fpasswd);

        finsize.close();
        fin.close();

        a.setUser(user);
        a.setPassword(password);
    }
};

class GuestFileOperations
{
public:
    const void guestRecord(Guest& g)
    {
        ofstream foutReg("guestReg.bin", ios_base::binary);
        ofstream foutSize("guestSize.txt");
        ofstream foutContacts("guestContacts.txt");

        foutSize << g.getUser().size() << endl;
        foutSize << g.getPassword().size() << endl;
        foutReg.write(g.getUser().c_str(), g.getUser().size());
        foutReg.write(g.getPassword().c_str(), g.getPassword().size());
        foutContacts << g.getFirtsName() << endl;
        foutContacts << g.getSecondName() << endl;
        foutContacts << g.getLastName() << endl;
        foutContacts << g.getPhone() << endl;
        foutContacts << g.getAddress() << endl;

        foutReg.close();
        foutSize.close();
        foutContacts.close();
    }
    void guestLoad(Guest& g)
    {
        ifstream finReg("guestReg.bin", ios_base::binary);
        ifstream finSize("guestSize.txt");
        ifstream finContacts("guestContacts.txt");

        char user[50] = { 0 };
        char password[50] = { 0 };
        char firstName[50] = { 0 };
        char secondName[50] = { 0 };
        char lastName[50] = { 0 };
        char phone[15] = { 0 };
        char address[100] = { 0 };
        int fuser;
        int fpasswd;
        finSize >> fuser;
        finSize >> fpasswd;
        finReg.read(user, fuser);
        finReg.read(password, fpasswd);
        finContacts >> firstName;
        finContacts >> secondName;
        finContacts >> lastName;
        finContacts >> phone;
        finContacts >> address;

        finReg.close();
        finSize.close();
        finContacts.close();

        g.setUser(user);
        g.setPassword(password);
        g.setFirstName(firstName);
        g.setSecondName(secondName);
        g.setLastName(lastName);
        g.setPhone(phone);
        g.setAddress(address);
    }
};

int main()
{
    setlocale(LC_ALL, "rus");
}