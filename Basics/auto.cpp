#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    auto x = 4;
    auto y = 3.37;
    // auto_ptr = &x;
    cout << "Type of X " << typeid(x).name() << endl
    << "Type of Y " << typeid(y).name() << endl;
    // << "Type of ptr " << typeid(ptr).name() << endl;


    return EXIT_SUCCESS;
}