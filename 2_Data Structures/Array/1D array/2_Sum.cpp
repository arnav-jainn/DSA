// sum of elements of an array

#include<iostream>
using namespace std;


int main(){
int arr[10];
int sum=0;
for(int i=0;i<10;i++){

    cout<<"Enter array numbers "<<i <<": ";
    cin>>arr[i];

    sum=sum+arr[i];

}
    cout<<"sum of array is: ";
    cout<<sum;
}