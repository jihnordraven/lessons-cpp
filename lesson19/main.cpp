#include <iostream>
#include <string>

using namespace std;

class User {
    private:
        string username;
        string email;
        string password;
    public:
        void set_data(string username, string email, string password) {
            username = username,
            email = email,
            password = password;
        }
        void get_info() {
            cout << "username: " << username << endl << "e-mail: " << email << endl; 
        }

};

int main() {

    User user;
    user.set_data("anton", "anton@gmail.com", "pass123");
    user.get_info();
    
    return 0;
}