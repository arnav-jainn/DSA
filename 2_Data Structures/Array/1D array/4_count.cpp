// count 0s and 1s in an array

#include<iostream>
using namespace std;

int main(){
    int arr[10];
    int count1=0;
    int count0=0;
    
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }

    for(int i=0;i<10;i++){
        if(arr[i]==0){
            count0++;
        }else if(arr[i]==1){
            count1++;
        }
    }

    cout<<"No of zeros:"<<count0<<endl;
    cout<<"No of :"<<count1<<endl;

}