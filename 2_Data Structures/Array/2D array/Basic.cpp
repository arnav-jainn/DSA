#include<iostream>

using namespace std;


//print 2D array row wise
void printr(int a[][4],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
//print 2D array coloumn wise
void printc(int a[][4],int r, int c){
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
}

int main(){

//Create 2D array
    int arr[][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,0,1,2}
    };

    int roww=3;
    int coll =4;

    printr(arr,roww,coll);
    printc(arr,roww,coll);

//input in an 2D array
    int arrr[3][3];
    int row=3;
    int col=3;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"enter i:"<<i<<"enter j:"<<j<<endl;
            cin>>arrr[i][j];
        }
    }
   printr(arrr,row,col);
}
