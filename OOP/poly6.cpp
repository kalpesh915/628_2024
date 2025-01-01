/**
    Over ridding
*/

#include<iostream>

using namespace std;

class Animal{
    public:
    string color = "black";
};

class Cat : public Animal{
    public:
    string color = "gray";
};


int main(){
    Cat c;
    cout<<endl<<"Color is "<<c.color;
}

