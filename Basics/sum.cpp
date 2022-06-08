#include <iostream>

int main(){
    int number1,number2;
    std::cout<<"Enter 2 numbers to be added: ";
    std::cin>>number1 >>number2;
    int sum = number1 + number2;
    std::cout<<"The sum of " << number1 <<" and " <<number2 <<" is " <<sum <<"\n";
}