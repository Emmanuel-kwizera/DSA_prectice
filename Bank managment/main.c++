#include <iostream>
#include "./Functions/vector.c++"
#include "./Functions/createFile.c++"
using namespace std;

int main(){ 
    User user {0,"John Doe", "John", "30"};
    insert_in_file(user);  
    // delete_by_id(2);
    // vector<User> users = get_all_user();
    // for(User user: users){
    //     printf("User %d: \n", user.id);
    //     cout<< "\t\t"<<user.full_name<<endl;
    //     cout<< "\t\t"<<user.username<<endl;
    //     cout<< "\t\t"<<user.age <<endl;
    // }

    adminDashMenu();

    return EXIT_SUCCESS;
}