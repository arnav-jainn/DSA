#include<iostream>
#include<string>
using namespace std;

class Student{

public:
    int reg;
    string name;
    int year;
    int nos;
    int*v;

private:
    string gf;

public: 
Student(){
    cout<<"default constructor"<<endl;                            //DEFAULT CONSTRUCTOR
 }

Student(int _reg,string _name,int _year,int nos,string gf){         // PARAMETERIZED CONSTRUCTOR
    cout<<"parameterized Contructor";
    reg=_reg;
    name=_name;
    year=_year;
    // OR (can be done in both the ways) 
    this->nos=nos;
    this->gf=gf;                                 //this pointer
    this->v=new int(10);
}

Student(int _reg,string _name,int _year,int _nos){         // PARAMETERIZED CONSTRUCTOR without gf
    reg=_reg;
    name=_name;
    year=_year;
    nos=_nos;
    cout<<"parameterized Contructor without gf";
}

// Copy constructor

Student(const Student&srcobj){
    cout<<"copy Contructor";
    this->name=srcobj.name;
    this->nos=srcobj.nos;
    this->reg=srcobj.reg;
    this->gf=srcobj.gf;
    this->year=srcobj.year;
}

~Student(){
   cout<<"Destructor"; 
   delete v;
   //This is done to delete the V as it is created on heap to avoid memory leak    

}

// Getter/Setter
string getGfName(){                         //getter
    return gf;
}

void setGfName(string gf){                  //setter
    this->gf=gf;
}

void studying(){
    cout<<"i am studying";
}
void bunk(){
    cout<<"i am bunking";
}
void dance(){
    cout<<"i am dancing";
}
void sleep(){
    cout<<"i am sleeping";
    }

private:
    void chatting(){
        cout<<"chatiing with gf";
    }
};

int main(){
    Student s1;                                 //will call default contructor
    // s1.reg=1234;
    cout<<s1.reg<<endl;


    Student s2(21, "arnav" ,2003,5,"tanzil");   //will call parameterised constructor 
    cout<<s2.name<<endl;
    cout<<s2.reg<<endl;
    // cout<<s2.gf<<endl;       cant be done as gf is private 
    // to access gf we use getter setter method
    cout<<s2.getGfName()<<endl;       //getter
    s2.setGfName("Tanzil");           //setter
    cout<<s2.getGfName()<<endl;



    Student s3(21, "SHBHAM" ,2003,5);
    cout<<endl;  

    Student *s4=new Student(1,"wefsafdas",2332,2);
    cout<<endl;
    cout<<s4->name<<endl;
    cout<<(*s4).name<<endl; 

    delete s4;

    cout<<endl;

    //use this practice to make copy constructor
    Student s5=s2;
    cout<<endl;
    // OR 
    // Student s5(s2);



    }