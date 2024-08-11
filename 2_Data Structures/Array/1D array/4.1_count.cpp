//count no of 0s and 1s in an array using function

#include<iostream>
using namespace std;

 void count_no(int arr[],int countZero, int countOne){

    for(int i=0;i<10;i++){
        if(arr[i]==0){
            countZero++;
        }else{
            countOne++;
        }
    }
    cout<<"No. of zeros: "<<countZero<<endl;
    cout<<"No. of Ones: "<<countOne<<endl;
 }
 int main(){
    int arr[10]={1,1,1,0,0,0,1,0,1,0};
    int countZero=0;
    int countOne=0;

    count_no(arr,countOne,countZero);


 }