#include <iostream>
using namespace std;

int main () {

    /*
    or --> ||  
    and --> && 
    not --> !  
    */

    cout << "Welcome My High Security System Boiiii" << endl;
      
      string sys_user = "ahmetaga";
      string sys_pass = "dumbuk9";
      
      string user1;
      string user1pw;
      
      cout << "Username: ";
      cin >> user1;
      cout << "Password: ";
      cin >> user1pw;
      
     if (sys_user == user1 && sys_pass == user1pw) {
    
        cout << "WELCOME";
        }
    else if (sys_user != user1 && sys_pass == user1pw) {
          
        cout << "Wrong Username"; // this is high security :)
        }
    
    else if (sys_user == user1 && sys_pass != user1pw) {
          
        cout << "Wrong Password"; // :D
        }
    else {
        
        cout << "All infos wrong";
        }
    
    return 0;
}