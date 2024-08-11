#include<iostream>

using namespace std;


int pivoit(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s/2+e/2;

    while(s<=e){
        if(s==e){ 
            return s;
        }
        if(arr[mid]<arr[mid-1]){
            return mid-1;
        }else if(arr[mid]>arr[mid+1]){
            return mid;
        }else if(arr[s]>arr[mid]){
            e=mid-1;
        }else{
            s=mid+1;
        }
        mid=s/2+e/2; 
    }
    return -1;


}
int main(){
    int arr[]={12,14,16,2,4,6,8,10};
    int n=8;

   int a= pivoit(arr,n);
   cout<<a;
}