/**
    Over ridding
*/

#include<iostream>

using namespace std;

class Animal{
    public:
    void eat(int i, int j){
        cout<<endl<<" Eating";
    }
};

class Dog : public Animal{
    public:
    void eat(){
        cout<<endl<<" Eating Bread";
    }
};

int main(){
    Dog d;
    d.eat();
}

