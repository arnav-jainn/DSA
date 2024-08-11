#include<iostream>

using namespace std;

int answer(int arr[],int target,int size){
    int start=0;
    int end = size-1;
    int mid = start+(end-start)/2;
    int ans=-1;
    

    while(start<=end){
        if(arr[mid]==target){
            ans=mid;
            start=mid+1;
        }else if(target>arr[mid]){
            start=mid+1;
        }else if (target<arr[mid]){
            end=mid-1;
        }
    
    mid = start+(end-start)/2;
    }
    return ans;
}
int main(){
    int arr[]={1,2,10,10,20,20,20,20,20,20,30,40};
    int target=20;
    int size=12;

    int ansIndex = answer(arr,target,size);

    if(ansIndex==-1){
        cout<<"Element not found";
    }else{
        cout<<"element found at index: "<<ansIndex;
    }
}