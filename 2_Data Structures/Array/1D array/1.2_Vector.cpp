// in vector no fixed size of array just keep inserting values

#include<iostream>
#include<vector>

using namespace std;

void printsize(vector<int>v){
    int size=v.size(); // it tells the size of the vector

    for(int i=0;i<size;i++){
        cout<<v[i];
    }
    cout<<endl;
}

int main(){

    vector<int>v;// same as array but with infinite size

    //insert into vector
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);

    printsize(v);

    // it will delete the last element from the vector
    v.pop_back(); 

    printsize(v);


}