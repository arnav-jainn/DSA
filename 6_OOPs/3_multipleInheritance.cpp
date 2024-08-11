#include<iostream>
using namespace std;

class Teacher{
    public:
    void teaching(){
        cout<<"teaching";
    }
};

class Researcher{
    public:
    void Research(){
        cout<<"Researching";
    }
};

class Professor:public Teacher,public Researcher{
    public:
    void bor(){
        cout<<"boring";
    }
};


int main(){
    Professor p;
    p.bor(); 

    return 0;
}