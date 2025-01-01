/**
    Over ridding
*/

#include<iostream>

using namespace std;

class Shape{
    public:
    virtual void draw() = 0;
};

class Circle : public Shape{
    public:
    void draw(){
        cout<<endl<<"Drawing Circle";
    }
};

class Square : public Shape{
    public:
    void draw(){
        cout<<endl<<"Drawing Square";
    }
};

class Rectangle : public Shape{
    public:
    void draw(){
        cout<<endl<<"Drawing Rectangle";
    }
};

int main(){
    Shape *ptr;
    ///Shape s;

    Circle c;
    Rectangle r;
    Square sq;

    ptr = &c;
    ptr->draw();

    ptr = &r;
    ptr->draw();

    ptr = &sq;
    ptr->draw();
}

