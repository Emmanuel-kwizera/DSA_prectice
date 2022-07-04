#include <iostream>
#include "./Functions/vector.c++"
#include "./Functions/createFile.c++"
using namespace std;

int main(){ 
    int option= adminDashMenu();    
	int cont;
    vector<User> users = get_user_by_id(20);
    if(users.size() > 0){
        for(User user: users){
            printf("\t User %d: \n", user.id);
            cout<< "\t\t "<<user.full_name<<endl;
            cout<< "\t\t "<<user.username<<endl;
            cout<< "\t\t "<<user.age <<endl<<endl;
        }
    }else{
        cout<< "User Not Found! ";
    }

    do{
        if(option == 1){
			system("clear");
            User user;
            // string name;
            user.id = 0;

            cout << "Enter user full names: ";
            getline(cin, user.full_name);
            // user.full_name = 

            cout<< "Enter user name: ";
            cin>> user.username;

            cout<< "Enter user age: ";
            cin>> user.age;

            insert_in_file(user);
        }
        
        else if(option == 2 ){
			system("clear");
            vector<User> users = get_all_user();
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

        else if(option == 3){
			system("clear");
            int id;
            vector<User> users = get_all_user();

	        cout<<"\t       List of all users in the system \n"; 
	        cout<<"\t_______________________________________________________\n\n\n";
            for(User user: users){
                printf("\t User %d: \n", user.id);
                cout<< "\t\t "<<user.full_name<<endl;
                cout<< "\t\t "<<user.username<<endl;
                cout<< "\t\t "<<user.age <<endl<<endl;
            }
	        cout<<"\n\t_______________________________________________________\n\n";
            
	        cout<<"\t\t\t Select a User      : ";
	        cin>>id;

            User user;
            user.id = 0;
            cout << "Enter user full names: ";
            getline(cin,user.full_name);

            cout<< "Enter user name: ";
            cin>> user.username;

            cout<< "Enter user age: ";
            cin>> user.age;

            update_by_id(id, user);
        }

        else if(option == 4){
			system("clear");
            int id;
            vector<User> users = get_all_user();
            
	        cout<<"\t       List of all users in the system \n"; 
	        cout<<"\t_______________________________________________________\n\n\n";
            for(User user: users){
                printf("\t User %d: \n", user.id);
                cout<< "\t\t "<<user.full_name<<endl;
                cout<< "\t\t "<<user.username<<endl;
                cout<< "\t\t "<<user.age <<endl<<endl;
            }
	        cout<<"\n\t_______________________________________________________\n\n";
            
	        cout<<"\t\t\t Select a User      : ";
	        cin>>id;

            delete_by_id(id);
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