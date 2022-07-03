#include <iostream>
#include "./Functions/vector.c++"
#include "./Functions/createFile.c++"
using namespace std;

int main(){ 
    // User user {0,"John Doe", "John", "30"};
    // insert_in_file(user);  
    // delete_by_id(2);
    // vector<User> users = get_all_user();
    // for(User user: users){
    //     printf("User %d: \n", user.id);
    //     cout<< "\t\t"<<user.full_name<<endl;
    //     cout<< "\t\t"<<user.username<<endl;
    //     cout<< "\t\t"<<user.age <<endl;
    // }
    int option= adminDashMenu();    
	int cont;
    do{
        if(option == 1){
            User user;
            user.id = 0;
            cout << "Enter user full names: ";
            getline(cin,user.full_name);

            cout<< "Enter user name: ";
            cin>> user.username;

            cout<< "Enter user age: ";
            cin>> user.age;

            insert_in_file(user);
        }else if(option == 2 ){
            vector<User> users = get_all_user();
	        cout<<"\n\t_______________________________________________________\n\n";
	        cout<<"\t       List of all users in the system \n"; 
	        cout<<"\t_______________________________________________________\n\n\n";
            for(User user: users){
                printf("\t User %d: \n", user.id);
                cout<< "\t\t "<<user.full_name<<endl;
                cout<< "\t\t "<<user.username<<endl;
                cout<< "\t\t "<<user.age <<endl<<endl;
            }
	        cout<<"\n\t_______________________________________________________\n\n";
        }

        cout<<"    Do you want to continue [1/0]  :";
		cin>>cont;
		if(cont == 0){
			option = -1;
		}else{
			system("clear");
			option = adminDashMenu();
		}
    }while(option != -1);

    return EXIT_SUCCESS;
}