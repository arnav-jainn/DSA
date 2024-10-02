//vector in 2D array

#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<vector<int> >arr(5,vector<int>(10,0));

    for(int i=0;i<arr.size();i++){ //row size 
        for(int j=0;j<arr[i].size();j++){ //size of each rows coloumn
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    //jagged array


    vector< vector<int> >brr;

    vector<int>v1(10,0);
    vector<int>v2(9,76);
    vector<int>v3(8,67);
    vector<int>v4(7,4);
    vector<int>v5(6,9);

    brr.push_back(v1);
    brr.push_back(v2);
    brr.push_back(v3);
    brr.push_back(v4);
    brr.push_back(v5);

        for(int i=0;i<brr.size();i++){ //row size 
            for(int j=0;j<brr[i].size();j++){ //size of each rows coloumn
                cout<<brr[i][j]<<" ";
            }
        cout<<endl;
        }

}