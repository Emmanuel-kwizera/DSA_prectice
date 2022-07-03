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

    file.open("./Files/users.txt",ios::in);
    string line;

    while(getline(file,line)){
        id++;
    }

    file.close();

    return id;
}

void insert_in_file(User user){
    user.id = next_id();

    fstream file;
    file.open("./Files/users.txt", ios::out | ios::app);

    file << user.id<< ","<< user.full_name<< ","<< user.username<< "," << user.age << endl;

    file.close();
}

vector<User> get_all_user(){

    fstream file;
    file.open("./Files/users.txt",ios::in);

    vector<User> users;

    string line;

    while(getline(file,line)){
        User user; 
        stringstream ss(line);
        int k = 0;
        while(ss.good()) {
            string substr;

            getline(ss, substr, ',');
            if(k == 0){
                user.id = stoi(substr);
            } 
            else if(k==1) {
                user.full_name = substr;
            } 
            else if(k==2){
                user.username = substr;
            }
            else if(k==3){
                user.age = substr;
            }
            k++;
        }
        users.push_back(user);
    }
    return users;
}

void delete_by_id(int id) {
    vector<User> users = get_all_user();

    fstream file;
    file.open("./Files/temp_users.txt", ios::out | ios::app);

    int next_id = 1;

    for(User user: users){
        if (user.id != id){
            file << next_id << "," << user.full_name << "," <<user.username <<"," <<user.age << "\n";            
            next_id++;
        }
    }

    remove("./Files/users.txt");
    rename("./Files/temp_users.txt","./Files/users.txt");
}

