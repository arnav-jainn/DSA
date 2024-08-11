//first occurence of the target 

#include<iostream>

using namespace std;

int binarySearch(int arr[],int size,int target){
    int start=0;
    int end=size-1;
    int mid = start+(end-start)/2;
    int ans=-1;

    while(start<=end){
        if(arr[mid]==target){
            ans=mid;
            end=mid-1;
        }else if(target>arr[mid]){
            start=mid+1;
        }
        else if(target<arr[mid]){
            end=mid-1;
        }
    mid = start+(end-start)/2;
    }
    return ans;
}

int main(){
    int arr[]={1,2,3,4,5,6,6,6,7,8,9};
    int size=11;
    int target=6;

    int answer = binarySearch(arr,size,target);
    if(answer==-1){
        cout<<"not found";
    }else{
        cout<<"found at: "<<answer;
    }
}