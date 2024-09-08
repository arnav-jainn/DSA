#include<iostream>

using namespace std;

int main(){
    string name;
    string surName;

    cin>>name;
    cin>>surName;

    cout<<"length of string: "<<name.length()<<endl;
    cout<<"Empty or not: "<<name.empty()<<endl;

    cout<<name.at(0)<<endl;           //given index pr ky h btao 

    cout<<"Front Character: "<<name.front()<<endl;
    cout<<"Back Character: "<<name.back()<<endl;

    name.append(surName);       //to concatinate 2 strings
    cout<<name<<endl;

    string desc="this is a car";
    desc.erase(4,3);            //append(index,how many character)  -> 3 char after index 4(will include index 4)
    cout<<desc<<endl;

    string fullName = "Arnav jain";
    string middle = "kumar ";
    fullName.insert(6,middle);
    cout<<fullName<<endl;

    name.push_back('J');
    cout<<name<<endl;

    name.pop_back();
    cout<<name<<endl;

    string str1 = "this is my name";
    string str2 = "is";


    if(str1.find(str2) == string::npos){            //npos  -> no position
        cout<<"Not found"<<endl;
    }else{
        cout<<"Found"<<endl;
    }

    if(str1.compare(str2)==0){
        cout<<"match"<<endl;
    }else{
        cout<<"not"<<endl;
    }

    string d = "this is a car";
     cout<<d.substr(5,3);

     
}