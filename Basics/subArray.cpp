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



int main(){
    int arr[5] = {2,5,7,4},n = 4; 
      
    cout << "All sub arrays of the array: " <<endl;

	print_subarrays(arr,n,0,0); 
    return EXIT_SUCCESS;
}