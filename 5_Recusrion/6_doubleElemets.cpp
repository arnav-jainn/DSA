//double all the elements of an array
//{1,2,4,} --> {2,4,8}

#include<iostream>
using namespace std;

void doublee(int *arr,int size,int index){
    if(index>=size){
        return;
    }
    arr[index]=2*arr[index];

    doublee(arr,size,index+1);
}

 
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=10;
    int index=0; 

doublee(arr,size,index);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}