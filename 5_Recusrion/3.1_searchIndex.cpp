#include<iostream>
using namespace std;

int searchArray(int arr[],int size,int index,int target){
    if(index>=size)
        return -1;

    if(arr[index]==target)
        return index;

    searchArray(arr,size,index+1,target);

} 
int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    int index=0;
    int target=123;
    
    int ans=searchArray(arr,size,index,target);
    cout<<ans;
    } 