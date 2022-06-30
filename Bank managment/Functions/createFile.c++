#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

void createFile(){
    ofstream MyFile("./Files/user.txt");
    MyFile << "Users file";
    MyFile.close();
    
    struct User{
        int user_id;
        string user_name;
        string user_card_ID_no;
        string Provience;
        string District;
        string emailOrTel;
        string user_category;
    };

    struct User user;
    string myText;

    ifstream MyReadFile("./Files/user.txt");
    while (getline (MyReadFile, myText)) {
        cout << myText;
    }

    MyReadFile.close();


}