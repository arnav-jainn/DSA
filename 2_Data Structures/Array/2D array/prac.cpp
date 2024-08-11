#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;


void maxi(int arr[3][4],int row,int col){
    vector<int>ans;
    int count0=INT_MAX;
    int rowNo=-1;


    for(int i=0;i<row;i++){
        int count=0;
        for(int j=0;j<col;j++){
            count++;
        }
    }
    if(count>count0){
        count0=count;
        row=i;
    }

    ans.pushback()

}

int main(){
int arr[3][4]={{0,0,1,0},
            {0,0,0,1},
            {1,1,0,0},
            {1,1,0,1}};

int row=3;
int col=4;

maxi(arr,row,col);
}