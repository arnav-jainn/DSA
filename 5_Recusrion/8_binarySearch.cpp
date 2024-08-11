#include<iostream>
using namespace std;

int binarySearch(int *arr,int s,int e,int target){
//base case
    if(s>e){
        //element not found
        return -1;
    }
//processing
    int mid=s+(e-s)/2;
    if(arr[mid]==target){
        return mid;
    }
//recursive call  
if(arr[mid]<target){
    s=mid+1;
    return binarySearch(arr,s,e,target);  
}else{
    e=mid-1;
    return binarySearch(arr,s,e,target);
}

}
int main(){
    int arr[]={1,2,3,4,5,6};
    int size=6;
    int target=4;
    int start=0;
    int end=size-1;

    int ans=binarySearch(arr,start,end,target);
    cout<<ans; 


}