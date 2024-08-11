//find the missing element from the sorted array
#include<iostream>
using namespace std;

int missingElement(int arr[],int size){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;

    while(start<=end){
        int diff=arr[mid]-mid;

        if(diff==1){
            start=mid+1;
            //right me jaoooo       
        }
        else{
        ans=mid;
        //answer ko store kro 
        end=mid-1;
        //left me jaooo
        }
        mid=start+(end-start)/2;
    }
    if(ans+1==0){
        return size+1;
    }
    return ans+1;
}

int main(){
    int arr[]={1,2,3,4,5,7,8,9};
    int size=8;

    int answer=missingElement(arr,size);

    cout<<answer;
}
