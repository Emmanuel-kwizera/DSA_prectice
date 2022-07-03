#include <iostream>
#include <fstream>
using namespace std;

void createFile(){
    // ofstream MyFile("./Files/user.txt");
    // MyFile << "Users file";
    // MyFile.close();
    
    // struct User{
    //     int user_id;
    //     string user_name;
    //     string user_card_ID_no;
    //     string Provience;
    //     string District;
    //     string emailOrTel;
    //     string user_category;
    // };

    // struct User user;
    // string myText;

    // ifstream MyReadFile("./Files/user.txt");
    // while (getline (MyReadFile, myText)) {
    //     cout << myText;
    // }

    // MyReadFile.close();

    fstream file;

    // file.open("./Files/Jacques.txt",ios::app | ios::out);
    // file<< "Hello World! ";
    // file.close(); 

    file.open("./Files/Jacques.txt",ios::in);
    string line;
    while(getline(file, line)){
        cout << line <<endl;
    }
    file.close();

}