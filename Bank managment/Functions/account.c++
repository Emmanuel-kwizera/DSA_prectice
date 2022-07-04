#include <iostream>
#include <vector>
#include "./vector.c++"

int next_id(){
    int id = 1;
    fstream file;

    file.open("./Files/accounts.txt",ios::in);
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
