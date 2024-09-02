#include<iostream>
using namespace std;

int unique(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;

}

void pairr(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                cout<<arr[i]<<arr[j]<<arr[k]<<endl;
            }
            
        }
    }
}

void zero(int arr[],int n){
    int count0=0;
    int count1=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count0++;
        }
        if(arr[i]==1){
            count1++;
        }
    }

    
    for(int i=0;i<count0;i++){
        arr[i]=0;
    }
    for(int j=count0;j<n;j++){
        arr[j]=1;
    }

}

void shift(int arr[],int n){

int temp[]={arr[0],arr[1]};

for(int i=0;i<n;i++){
    arr[i]=arr[i+2];
}

arr[n-1]=temp[1];
arr[n-2]=temp[2];

}


int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,0};
    int n=10;

    shift(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}