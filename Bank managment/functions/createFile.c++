#include <iostream>
#include <fstream>
using namespace std;

void createFile(){
    int rno,fee;
    char name[50];
   
    cout <<"Enter the Roll Number:";
    cin >>rno;
       
    cout <<"\nEnter the Name:";
    cin >>name;
       
    cout <<"\nEnter the Fee:";
    cin >>fee;
   
    ofstream fout("d:/student.doc");   
    fout <<rno <<"\t" <<name <<"\t" <<fee <<endl;   //write data to the file student
   
    fout.close();
   
    ifstream fin("d:/student.doc");   
    fin >>rno >>name >>fee;   //read data from the file student
   
    fin.close();
   
    cout <<endl <<rno <<"\t" <<name <<"\t" <<fee <<endl;
}