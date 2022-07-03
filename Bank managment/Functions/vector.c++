#include <iostream>
#include <vector>
#include <fstream>
#include <bits/stdc++.h>
#include <sstream>

using namespace std;

struct User{
    int id;
    string full_name;
    string username;
    string age;
};

int next_id(){
    int id = 1;
    fstream file;

    file.open("./Files/user.txt",ios::in);
    string line;

    while(getline(file,line)){
        id++;
    }

    return id;
}

void insert_in_file(User user){
    user.id = next_id();

    fstream file;
    file.open("./Files/user.txt", ios::out | ios::app);

    file << user.id<< ", "<< user.full_name<< ", "<< user.username<< ", " << user.age << endl;

    file.close();
}

vector<User> get_all_user(){

    fstream file;
    file.open("./Files/user.txt",ios::in);

    vector<User> users;

    string line;
    while(getline(file,line)){
        User user; 

        stringstream ss(line);
        int k = 0;

        for(string rowElement; ss>> rowElement;){
            if(rowElement[rowElement.length() - 1] == ',')
                rowElement.pop_back();
            
            if(k == 0) user.id = stoi(rowElement);
            else if(k==1) user.full_name = rowElement;
            else if(k==2) user.username = rowElement;
            else if(k==3) user.age = rowElement;

            k++;
        }
        users.push_back(user);
    }
    return users;

}

