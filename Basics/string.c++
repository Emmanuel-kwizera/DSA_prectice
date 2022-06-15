#include <iostream>
using namespace std;

int main () {
    string string1 = "Beginner ";
    string string2 = "to Expert ";
    string string3 = "Tutorials";
    string string4 = string1 + string2 + string3;
    int len = string4.length();

    std::cout << "string4 concatination of all: ' " << string4 << " '" << endl;
    std::cout << "Length of string1 is: " << len <<endl;
    std::cout << "Expert is at position " << string2.find("Expert") <<endl;
    std::cout << "Part of string 2: " << string2.substr(3,8)<<endl;
    std::cout << "Replacing 'Expert': " << string4.replace(12, 17, "Guru")<<endl;
    std::cout << "Insertion: "<< string4.insert(0, " by Kindson")<<endl;
    std::cout << "Erasing: " << string3.erase(0,3)<<endl;
    
    return EXIT_SUCCESS;
}