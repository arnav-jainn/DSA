#include<iostream>
#include<queue>

using namespace std;

int main(){
    //creation
    queue<int> q;

    //insertion
    q.push(3);

    //size
    cout<<"queue size: "<<q.size()<<endl;

    //empty

    if(q.empty()){
        cout<<"empty";
    }else{
        cout<<"not";
    }

    //remove
    q.pop();


    //front element of queue
    q.front();

    //last element of queue 
    q.back(); 
    
}