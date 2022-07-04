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
        stringstream ss(line);
        string id_as_string;
        getline(ss, id_as_string, ',');
        id = stoi(id_as_string) + 1;
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
    file.close();
    return users;
}

vector<User> get_user_by_id(int id){

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
        if(user.id == id){
            users.push_back(user);
        }
    }
    file.close();
    return users;
}

void update_by_id(int id, User newInfo) {
    vector<User> users = get_all_user();

    fstream file;
    file.open("./Files/temp_users.txt", ios::out | ios::app);

    for(User user: users){
        if (user.id != id){
            file <<user.id << "," <<user.full_name << "," <<user.username <<"," <<user.age << "\n";
        }else{
            file <<id << "," <<newInfo.full_name << "," <<newInfo.username <<"," <<newInfo.age << "\n";
        }
    }

    file.close();

    remove("./Files/users.txt");
    rename("./Files/temp_users.txt","./Files/users.txt");
}

void delete_by_id(int id) {
    vector<User> users = get_all_user();

    fstream file;
    file.open("./Files/temp_users.txt", ios::out | ios::app);

    // int next_id = 1;

    for(User user: users){
        if (user.id != id){
            file << user.id << "," << user.full_name << "," <<user.username <<"," <<user.age << "\n";            
            // next_id++;
        }
    }

    file.close();

    remove("./Files/users.txt");
    rename("./Files/temp_users.txt","./Files/users.txt");
}

static int adminDashMenu(){
	int choice;
	cout<<"\t       Welcometo the admin pannel Here is menu \n"; 
	cout<<"\t_______________________________________________________\n\n\n";
	cout<<"\n\t    I.0 USER MANAGMENT   \n";
	cout<<"\t     1. Insert a new user \n";
	cout<<"\t     2. view users \n";
	cout<<"\t     3. Update user \n";
	cout<<"\t     4. Delete user \n";
	cout<<"\n\t    II.0 ACCOUNT MANAGMENT   \n";
	cout<<"\t     5. Activate an acount \n";
	cout<<"\t     6. De-activate an acount \n";
	cout<<"\t     7. Register a new acount \n";
	cout<<"\t     8. View availabe acounts \n";
	cout<<"\n\t    III.0 PRICING MANAGMENT   \n";
	// cout<<"\n\t    IV.0 REGISTRATION  \n";
	// cout<<"\t     7. Insert a new client \n";
	cout<<"\n\n\t_______________________________________________________\n\n";
	cout<<"\t\t\t Enter your choice      : ";
	cin>>choice;
	return choice;
}