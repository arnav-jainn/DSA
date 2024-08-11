//find the max and the min number from the array

#include<iostream>
#include<limits.h>

using namespace std;

int findMax(int arr[][3],int row,int col){
int maxNum=INT_MIN;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]>maxNum){
                maxNum=arr[i][j];
            }
        }
    }
    return maxNum;
}
int findMin(int arr[][3],int row,int col){
    int minNum=INT_MAX;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]<minNum){
                minNum=arr[i][j];
            }
        }
    }
    return minNum;
}

int main(){
    int arr[][3]={{1,2,3},{4,5,6},{7,8,9}};
    int row=3;
    int col=3;

    cout<<"the max number is: "<<findMax(arr,row,col)<<endl;
    cout<<"the min number is: "<<findMin(arr,row,col);
}