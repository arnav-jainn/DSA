#include<iostream>
#include<vector>

using namespace std;


void print(vector<int>v){
    int size = v.size();
    cout<<"printing vector"<<endl;
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
        //OR
       //cout<<v.at(i)<<" ";
    }
    cout<<endl;
}

//OR

//TO PRINT A VECTOR

void print(vector<int>v){
   for(auto it:v){
      cout<<it;
   }
}

int main(){
    vector<int>v;

    //input in vector from use
     int n;
     cin>>n;

     for(int i=0;i<n;i++){
        int data;
        cin>>data;

        v.push_back(data);
     }
     //size is increased and extra 10 elements are being entered
     for(int i=0;i<10;i++){
        int data;
        cin>>data;
        v.push_back(data);
     }
     print(v);

     // to clear the vector
     v.clear(); 

     print(v);

}
