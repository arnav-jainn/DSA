#include<iostream>
using namespace std;


//funtion overloading
int add(int a,int b){
    return a+b;
}

double add(double a, double b){
    return a+b;
}

int add(int a,int b,int c){
    return a+b+c;
}
int main(){
    cout<<add(2,3);
    cout<<add(4.4,5.6);
    cout<<add(1,2,3);
}