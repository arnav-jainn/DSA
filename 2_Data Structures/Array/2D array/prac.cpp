#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;

void printt(int arr[][4],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}


void maxi(int arr[][4],int row,int col){
    int count;
    for(int i=0;i<row;i++){
        count=0;
        for(int j=0;j<col;j++){
            if(arr[i][j]==1){
                count++;
            }
        }
        
    }

}

int main(){
int arr[][4]={
            {0,0,1,0},
            {0,0,0,1},
            {1,1,0,0},
            {1,1,0,0}
            };

int row=4 ;
int col=4;

}