#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

void createFile(){
    ofstream MyFile("./Files/user.txt");
    MyFile << "Users file";
    MyFile.close();
    
    struct User
    {
        int user_id;
        char user_name[100];
        char user_card_ID_no[16];
        char Provience[100];
        char District[100];
        char emailOrTel[200];
        char user_category[30];
    };

    struct User user;
    string myText;

    ifstream MyReadFile("./Files/user.txt");
    while (getline (MyReadFile, myText)) {
        cout << myText;
    }

    MyReadFile.close();


}