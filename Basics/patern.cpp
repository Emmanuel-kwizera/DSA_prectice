#include<iostream>
using namespace std;

void printNumber(int number){
    if(number < 6 ){
        for(int i=0; i < number; i++){
            cout << " . ";
        }
        cout<<endl;
        printNumber(number+1);
    }
   
}

int main(){
   int i = 0;
   printNumber(i);     

    return EXIT_SUCCESS;
}