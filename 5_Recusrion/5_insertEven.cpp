//insert all the even number of an array in a vector

#include<iostream>
#include<vector>
using namespace std;

void solve(int *arr,vector<int>&v,int index,int size){

    if(index>=size)
        return;

    if(arr[index]%2==0){
        v.push_back(arr[index]);
    }

    solve(arr,v,index+1,size);

}

int main(){
    int arr[]={1,2,3,4,5,6};
    int size=6;
    int index=0; 
    vector<int>v;

    solve(arr,v,index,size);

//FOR EACH LOOP
    // for(int num : v){
    //     cout<<num<<" ";
    // }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<"  ";
    }

}