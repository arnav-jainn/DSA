//find min no in an array
#include<iostream>
#include<limits.h>
using namespace std;

void findMin(int arr[],int size,int index,int &mini){
    if(index>=size)
    return;

    mini=min(mini,arr[index]);

    findMin(arr,size,index+1,mini);
}
int  main(){
    int arr[]={10,2,3,4,5,6};
    int size=6;
    int index=0;
    int mini=INT_MAX;

    findMin(arr,size,index,mini);
    cout<<mini;
}
