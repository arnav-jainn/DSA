#include<iostream>
#include<string>

using namespace std;

class Bird{
   public: 
    int age,weight;
    int legs;
    string color;

    void eat(){
        cout<<"eating";
    }
    void fly(){
        cout<<"flying";
    }
};

class Sparrow:public Bird{
    public:

        Sparrow(int age,int weight,int legs,string color){
            this->age=age;
            this->weight=weight;
            this->legs=legs;
            this->color=color;
        }
        void grassing(){
            cout<<"grassing"<<endl;
        }
};

class Peigon:public Bird{
    public:
        void guttering(){
            cout<<"guttering "<<endl;
        }
};

class Parrot:public Bird{
    public:
        void speaking(){
            cout<<"speaking  "<<endl;
        }
};


int main(){

    Sparrow s(1,1,2,"red");              //it can access all the data memebers of class bird also
    cout<<s.color;
    s.eat();
    s.grassing();

}