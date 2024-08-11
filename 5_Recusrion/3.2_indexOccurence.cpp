//print index of all the occurence of the array

#include<iostream>
using namespace std;

void occ(int *arr,int size,int index,int target,vector<int>&v){
    if(arr[index]>=size){
        return;
    }
    if(arr[index]==target){
        cout<<index<<" "<<endl;
        v.push_back(index);
    }
    occ(arr,size,index+1,target,v);
}

int main(){
    int arr[]={1,2,2,3,4,5,6,6,6,7,8,9};
    int size=12;
    int index=0;
    int target=6;
    vector<int>v;

    occ(arr,size,index,target,v);

    for(int num:v){
        cout<<num<<" ";
    }
}