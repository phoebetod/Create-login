#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool isLoggedIn(){
    string username, password, un, pw;

    cout << "Please enter a username: \n";
    cin >> un;

    cout << "Please enter a password: \n";
    cin >> pw;

ifstream read("confidential.txt");

getline(read, username); 
getline(read, password); 


if(un == username && pw == password){
    return true;
} else {
    return false;
}
}

int main(){
    int choice{};

    cout << "1: Register\n";
    cout << "2: Login\n";
    cout << "Please choose by inputting 1 or 2: \n";
    cin >> choice;
    
    if(choice == 1){
        string username, password;
        cout << "Select a username: "; cin >> username;
        cout << "Select a password: "; cin >> password;
    
        fstream my_file;
        my_file.open("confidential.txt", ios::out);
        my_file << username << endl << password;

        my_file.close();
        main();
     }

    else if(choice == 2){
        bool status = isLoggedIn();

        if(!status){
            cout << "False Login!" << endl;
            system("PAUSE");
            return 0;
            }

        if(status){
            cout << " Successfully logged in!" << endl;
            system("PAUSE");
            }
        }
        
    

    return 1;
}