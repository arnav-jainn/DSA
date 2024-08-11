#include<iostream>

using namespace std;

class Person{
    public:
    void walk(){
        cout<<"walking";
    }
};

class Teacher:virtual public Person{
    public:
    void teach(){
        cout<<"teaching";
    }
};

class Researcher:virtual public Person{
    public:
    void research(){
        cout<<"researching";
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
    // p.walk();     this is not possible

    // solution 1: Scope resolution
    p.Teacher::walk();
    p.Researcher::walk();

    // solution 2: Virtual
    p.walk();
}