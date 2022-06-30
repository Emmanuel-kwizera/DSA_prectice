#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

void createFile(){
    ofstream MyFile("./Files/filename.txt");

    // MyFile << "Files can be tricky, but it is fun enough!";

    // MyFile.close();
    
    struct User
    {
        int user_id;
        char user_name[100];
        char user_ID_card_no[16];
        char Provience[100];
        char District[100];
        char emailOrTel[200];
        char user_category[30];
        int user_meter;
    };
}