//linear search using function 
//without flag 

#include<iostream>
using namespace std;
 
bool linearSearch(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return true;
        }
    }
       return false;
}

int main(){
    int size=10;
    int arr[10]={1,2,3,4,5,6,7,8,9,0};
    int target=4;

    bool ans = linearSearch(arr,size,target);

    if(ans==0){
        cout<<"not found";
    }else
    cout<<"found"; 
}   