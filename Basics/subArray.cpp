#include <iostream>
using namespace std;

// int function(int n, int array[]){
// }

int print_arr(int arr[],int n,int j,int k){ 
    // if(k == 1)
    //     return;
    int sum = 0;
    cout<<"     [ ";
	for(int i = j;i<=k;i++){
		cout<<arr[i]<<" "; 
        sum += arr[i];
    }
    cout<<"] = "<< sum; 
	cout<<endl;
    return sum;
}

void print_subarrays(int arr[],int n,int i,int j) {  
    if(i == n)
        return;
    if(j == n) 
		return; 
    print_arr(arr,n,i,j);
    if(j == n-1) 
		print_subarrays(arr,n,i+1,i+1);
    else 
		print_subarrays(arr,n,i,j+1);

    // cout <<"\n \n \n " <<print_arr(arr,n,i,j);
}

bool check_Exsistance(int n , int array[], int size){
    for(int i=0;i<size;i++){
        // cout << array[i] <<endl;
        if(array[i] == n){
            return true;
        }    
    }
    return false; 
}

int main(){
    int arr[5] = {2,5,7,4},n = 4; 
      
    // cout << "All sub arrays of the array: " <<endl;

	// print_subarrays(arr,n,0,0); 

    // int number;
    // std::cout<<"Enter a sum to seach for : ";
    // std::cin >> number;
    // std::cout << "Does sub array sums containt [ " << number <<" ]" <<endl;

    int x;
    cout<<"     [ ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "; 
    }
    cout<<"] ";

    while(1){
        std::cout << "\n Enter a number to seach for : ";
        std::cin >> x;
        if(x == -1 )
            exit(0);
        else{
            std::cout << "\n ======================================================= \n\t";
            std::cout <<"Return of check_Exsistance: " << check_Exsistance(x,arr,n);
            std::cout << "\n ======================================================= \n ";
        }
    }

    return EXIT_SUCCESS;
}