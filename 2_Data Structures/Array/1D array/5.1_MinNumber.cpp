#include<iostream>
#include<limits.h>

using namespace std;

int minn(int arr[],int minnn,int size){
    for(int i=0;i<size;i++){
        minnn=min(arr[i],minnn);
        }
        return minnn;
    }

int main(){
    int arr[]={7,2,3,4,5,6,2,1,6};
    int minnn=INT_MAX;
    int size=9;

    int mini=minn(arr,minnn,size);
    cout<<mini;
}