//sort the given array such that its all negative elements are at left and all positive elements are at right 
//array extra


#include<iostream>
using namespace std;

void sortt(int arr[],int size){
    int j=0;
        // j-> memory block jha sirf negative numver store kr skta h

    for(int i=0;i<size;i++){
         // i-> treverse entie array to find negavtive number 

         if(arr[i]<0){
            swap(arr[i],arr[j]);
            j++;
         }
    }
}

int main(){
    int arr[]={1,3,-4,5,6,3,-4,6,7,-45,32};
    int size=11;

    sortt(arr,size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
