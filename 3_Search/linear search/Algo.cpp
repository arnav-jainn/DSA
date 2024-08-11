#include<iostream>
using namespace std;


void linearSearch(int arr[],int target, int size,int count){
    
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            count=1;
            break;
        }
    }
        if(count==1){
        cout<<"found"<<endl;
    }else{
        cout<<"not found"<<endl;
    }

    cout<<count;

}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,0};
    int size=10;
    int target;
    int count=0;

    cin>>target;

    linearSearch(arr,target,size,count);


    
}