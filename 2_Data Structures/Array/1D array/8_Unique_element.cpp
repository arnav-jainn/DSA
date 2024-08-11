//find the unique element from the array

#include<iostream>
using namespace std;

int uniquee(int arr[],int size){
    int anss=0;
    for(int i=0;i<size;i++){
        anss=anss^arr[i];
    }
    return anss;

}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,0,2,3,4,5,6,7,8,9,0};
    int size=19;

   int ans= uniquee(arr,size);

    cout<<"Unique element is: "<<ans;
}