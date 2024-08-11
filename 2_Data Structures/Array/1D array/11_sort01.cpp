//sort all the zero and one in an array

#include<iostream>
using namespace std;

void sort0(int arr[],int n){
    int count0=0;
    int count1=0;

    for(int i=0;i<n;i++){
        if(arr[i]==0){
        count0++;
    }else{
        count1++;
        }
    }

    int i;
    for(i=0;i<count0;i++){
        arr[i]=0;
        }
        
    for(int j=i;j<n;j++){
        arr[j]=1;
    }

    //OR
    int index=0;

    while(count0--){
        arr[index]=0;
        index++;
    }
    while(count1--){
        arr[index]=1;
        index++;
    }
    
}


int main(){
    int arr[]={1,0,0,1,1,1,1,0,0,0,1};
    int n=11;

    sort0(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

}