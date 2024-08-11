//right shift elements of an array by 1

//try left shift on own

#include<iostream>
using namespace std;


void solve(int arr[],int n){
    int temp=arr[n-1];

    for(int i=n-1;i>=1;i--){
        arr[i]=arr[i-1];
    }

    arr[0]=temp;
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,0};
    int n=10;

    solve(arr,n);
    
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}