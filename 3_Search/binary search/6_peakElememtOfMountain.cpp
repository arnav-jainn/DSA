//peak element of a mountain
// LC-852

#include<iostream>
using namespace std;

int peakElement(int arr[],int size){
    int start=0;
    int end=size-1;
    int mid=start-end/2;
    
    while(start<end){
        if(arr[mid]<arr[mid+1]){
            //A waali line p hu 
            // right me jaana h
            start=mid+1;
        }else{
            // ya to B line p hu 
            // ya peak element p hu
        end=mid;

        }
        mid=start-end/2;
    }
    return start;
    cout<<end;
}
int main(){
    int arr[]={1,2,9,7,6};
    int size=5;
    int a=peakElement(arr,size);
    cout<<a;
}