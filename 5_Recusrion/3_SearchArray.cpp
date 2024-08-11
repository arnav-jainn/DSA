#include<iostream>
using namespace std;

bool searchArray(int arr[],int size,int index,int target){
    if(index>=size)
        return false;

    if(arr[index]==target)
        return true;

    bool ans=searchArray(arr,size,index+1,target);
    return ans;
}
int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    int index=0;
    int target=3;
    
    int find = searchArray(arr,size,index,target);
    cout<<"Element found?: "<<find;
} 