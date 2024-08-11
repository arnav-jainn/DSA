#include<iostream>

using namespace std;



// int binary(int arr[],int n,int target){
//     int start=0;
//     int end=n-1;
//     int mid=(start+end) /2;

//     while(start<=end){
//         if(arr[mid]==target){
//             return mid;
//         }else if(target>arr[mid]){
//             start=mid+1;
//         }else if(target<arr[mid]){
//             end=mid-1;
//         }
//         mid=(start+end)/2;
//     }
//     return -1;
// }

int missing(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s/2+e/2;
    int ans=-1;

    while(s<=e){
    int diff=arr[mid]-mid;

    if(diff==1){
        s=mid+1;
    }else{
        ans=mid;
        e=mid-1;
    }
    mid=s/2+e/2;
    }
    return ans+1;

}


int main(){

    int arr[]={1,2,3,4,5,6 };
    int size=6;
    // int target=4;

    int a=missing(arr,size);
    cout<<a;
}