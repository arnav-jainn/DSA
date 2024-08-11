//Find total occurence of a number

#include<iostream>
using namespace std;

int firstOccurence(int arr[],int size,int target){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    
    while(start<=end){
    if(arr[mid]==target){
        ans=mid;
        end=mid-1;
    } else if(target>arr[mid]){
        start=mid+1;
    }else if(target<arr[mid]){
        end=mid-1;
    }
    mid=start+(end-start)/2; 
    }
    return ans;
}

int lastOccurence(int arr[],int size,int target){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int anss=-1;

    while(start<=end){
    if(arr[mid]==target){
        anss=mid;
        start=mid+1;
    } else if(target>arr[mid]){
        start=mid+1;
    }else if(target<arr[mid]){
        end=mid-1;
    }
    mid=start+(end-start)/2; 
    }
    return anss; 
}

int main(){
    int arr[]={1,2,3,4,4,4,4,4,5,6,7,8,9};
    int size=13;
    int target=4;

    int first=firstOccurence(arr,size,target);
    int last=lastOccurence(arr,size,target);

    int total=last-first+1;
    cout<<"total instance: "<<total;
}