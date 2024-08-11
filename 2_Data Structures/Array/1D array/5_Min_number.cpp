//get min number from array using function
//INT_MAX used to find the min number 
//INT_MIN used to find the max number

#include<iostream>
#include<limits.h>
using namespace std;

void minn(int arr[],int min){
    for(int i=0;i<10;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<min;
}
int main (){
    int arr[10];
      int min=INT_MAX;
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    minn(arr,min);
}