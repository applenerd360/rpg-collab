
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    string userName;
    string userPassword;
    int loginAttempt = 0;
    
    while (loginAttempt < 5)
    {
    		cout << "If your account doesn't exist, please enter your desired values\n";
        cout << "Please enter your username: ";
        cout << " " << endl;
        cin >> userName;
        cout << "Please enter your password: ";
        cout << " " << endl;
        cin >> userPassword;
        istream userFile(userName+".xml");
        
        if(userFile.good()){

        } else {
        		loginAttempt++;
        }

    }
    if (loginAttempt == 5)
    {
        cout << "Too many login attempts! The program will now terminate.";
        cout << " " << endl;
        return 0;
    }
    
    cout << "Thank you for logging in.\n";
    cout << " " << endl;
    
    return 0;
}
