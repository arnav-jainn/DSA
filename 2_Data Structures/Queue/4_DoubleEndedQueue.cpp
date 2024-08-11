#include<iostream>
#include<deque>

using namespace std;


int main(){

    deque<int>d;

    d.push_back(10);

    d.push_front(5);

    d.pop_back();

    d.pop_front();

    d.front();

    d.back();

    d.size();
    

    cout<<d.size();

}