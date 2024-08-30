#include<iostream>
using namespace std;

bool found(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return true;
        }
    }
        return false;
}

void countt(int arr[],int n){
    int count0=0;
    int count1=0;

    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count0++;
        }else{
            count1++;
        }
    }
    cout<<"0: "<<count0<<endl;
    cout<<"1: "<<count1;
}

int main(){
    int arr[]={0,1,1,1,0,1,1,0,1};
    int n=9;

    countt(arr,n);

}