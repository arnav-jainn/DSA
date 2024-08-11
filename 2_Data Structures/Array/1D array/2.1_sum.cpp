//Sum of an array using functions

#include<iostream>
using namespace std;

void summ(int arr[],int size,int sum){
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    cout<<sum;
}

int main(){
    int sum=0;
    int size=10;
    int arr[]={1,2,3,4,5,6,7,8,9,0};

    summ(arr,size,sum); 
}                           