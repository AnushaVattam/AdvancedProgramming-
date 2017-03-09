#include <iostream>
#include <string>

using namespace std;
class Security
{
   public:
         void granting(string name,  string password)
        {
            if(name== names1 && Anushapassword== password)
            {
                cout << "access granted" << endl;
            }
            else if(name== names2 && Pradeeppassword== password)
            {
                cout << "access granted for :" << endl;
            }
            else
            {
                cout <<" check / reenter the password again" << endl;
                cout << "enter the account holder name:" << endl;
                cin >> name;
                cout << "Enter the password:" << endl;
                cin >> password;
                granting(name, password);
            }
        }

    private:
                string names1 = "Anusha";
                string names2 ="Pradeep";
                string Anushapassword ="12345";
                string Pradeeppassword ="Pradeep";


};

int main()
{
    string name, password;
    cout << "enter the account holder name:" << endl;
    cin >> name;
    cout << "Enter the password:" << endl;
    cin >> password;
    Security Access;
    Access.granting(name, password);
    return 0;
}
