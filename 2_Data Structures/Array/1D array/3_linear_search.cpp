// linear search using flag

#include<iostream>
using namespace std;

int main(){
int arr[10]={1,2,3,4,5,6,7,8,9,0};
int target=0;
bool flag=0;

for(int i=0;i<=10;i++){
    if(arr[i]==target){
        flag=1;
        break;
    }
    }

    if(flag==1){
        cout<<"target found";
    }else{
        cout<<"Target not found";
    }
}