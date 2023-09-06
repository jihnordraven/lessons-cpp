#include <iostream>
#include <string>

using namespace std;

class User
{
private:
    string email;
    string password;

public:
    User(string e, string p)
    {
        set_data(e, p);
    };
    User() {}
    void set_data(string email, string password)
    {
        this->email = email;
        this->password = password;
    };
    void get_data()
    {
        cout << "email: " << email << endl
             << "password: " << password << endl;
    };
    ~User()
    {
        cout << "Object deleted" << endl;
    };
};

int main()
{

    User user("hello@gmail.com", "hello123");
    // user.set_data("anton@gmail.com", "pass123");
    user.get_data();

    return 0;
}