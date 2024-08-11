//print the sum of each row of the array
//print the sum of each coloumn of the array

#include<iostream>
using namespace std;

void rowSum(int arr[][3],int row,int col){
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum=sum+arr[i][j];
        }
    cout<<sum<<endl;
    }
}

void colSum(int arr[][3],int row,int col){
    for(int i=0;i<col;i++){
        int sum=0;
        for(int j=0;j<row;j++){
            sum=sum+arr[j][i];
        }
    cout<<sum<<endl;
    }
}

int main(){
    int arr[][3]={{1,2,3},{4,5,6},{7,8,9}};
    int row=3;
    int col=3;

    cout<<"sum rowise: "<<endl;
    rowSum(arr,row,col);

    cout<<"sum colwise: "<<endl;
    colSum(arr,row,col);
}