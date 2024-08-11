//right shift elements of an array by k

#include<iostream>
using namespace std;


void solve(int arr[],int n){
    int temp[]={arr[n-2],arr[n-1]};

    for(int i=n-1;i>=1;i--){
        arr[i]=arr[i-2];
    }

    arr[0]=temp[0];
    arr[1]=temp[1];
}

int main(){
    int arr[]={10,20,30,40,50,60};
    int n=6;

    solve(arr,n);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}