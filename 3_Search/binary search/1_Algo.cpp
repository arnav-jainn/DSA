#include<iostream>

using namespace std;

int answer(int arr[],int target,int size){
    int start=0;
    int end = size-1;
    int mid = (start+end)/2;

    while(start<=end){
        if(arr[mid]==target){
            return mid;
        }else if(target>arr[mid]){
            start=mid+1;
        }else if (target<arr[mid]){
            end=mid-1;
        }
        // mid ko dubara update b krna h yh glti ho skti h 
       mid =(start+end)/2;
    }
    return -1;
}
int main(){
    int arr[]={1,3,5,6,7,8,9,10,19,30,40,95};
    int target=10;
    int size=12;

    int ansIndex = answer(arr,target,size);

    if(ansIndex==-1){
        cout<<"Element not found";
    }else{
        cout<<"element found at index: "<<ansIndex;
    }
}