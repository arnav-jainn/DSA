#include<iostream>
#include<limits.h>
using namespace std;

void solve(int *arr,int size,int index,int &maxi){

    if(index>=size){
        return;
    }

    maxi=max(arr[index],maxi);

    solve(arr,size,index+1,maxi);
}

int main(){
int arr[]={1,2,3,4,5,6};
int size=6;
int index=0;
int maxi=INT_MIN;

solve(arr,size,index,maxi);
cout<<maxi;
}