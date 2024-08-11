//hollow rectangle 


#include<iostream>
using namespace std;

int main(){
    for(int row=1;row<=8;row++){
        for(int col=1;col<=6;col++){
            if(row==1 || row==8){
                cout<<" # ";
            }
        else{
            if(col==1 || col==6){
                    cout<<" # ";
                }
            else{
                cout<<"   ";
            }
            }
        }
        cout<<endl;
    }
}