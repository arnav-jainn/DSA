//reverse the given array
#include<iostream>
using namespace std;

void reversee(int arr[],int size){
    int left=0;
    int right=size-1;
    
    while(left<=right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,0};
    int size=10;

    reversee(arr,size);
}
