//find the missing number from the array
//LC-268(MISSING NUMBER) 

#include<iostream>
 
using namespace std;


int missing(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }

    int totalSum=((n)*(n+1))/2;
    int ans=totalSum-sum;
    return ans;

}

int main(){
    int arr[]={1,2,3,4,6,7,8,9,0};
    int n=9;

    cout<<missing(arr,n);
}