#include<iostream>
#include<string.h>

using namespace std;

void reversee(char arr[],int n){
    int left=0;
    int right=n-1;

    while(left<=right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
}
int main(){
    char arr[100];
    cin.getline(arr,99);
    int n=strlen(arr);

    reversee(arr,n);

    cout<<arr;

    
}