//sort all the 0 1 and 2 in an array
//array extra class
//LC-75(SORT COLORS)

#include<iostream>
using namespace std;

void sort(int arr[],int size){
    int left=0;
    int right=size-1;

    int index=0;

    while(index<=right){
        // Condition here will be less then right
        if(arr[index]==0){
            swap(arr[index],arr[left]);
            index++;
            left++;
        }else if(arr[index]==2){
            swap(arr[index],arr[right]);
            right--;
            //catch here  index++ will not be there becoz we dont know what is the element 
            //at this position after swapping
        }else
        index++;
    }

}

int main(){
    int arr[]={1,1,0,2,0,0,2,1,1};
    int size=9;

    sort(arr,size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}