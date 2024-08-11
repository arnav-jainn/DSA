//find whether the given array is sorted or not

#include<iostream>
using namespace std;

bool sort(int *arr,int size,int index){
    if(index>=size)
    return true ;

    if(arr[index]<arr[index-1])
    return false;

    bool ans=sort(arr,size,index+1);
    return ans;
}

int main(){
    int arr[]={0};
    int size=0;
    int index=1;// index 0 s phele koi h hi ni compare krne k lie  

    bool ans=sort(arr,size,index);
    
    if(ans){
        cout<<"sorted";
    }else
        cout<<"not";
}