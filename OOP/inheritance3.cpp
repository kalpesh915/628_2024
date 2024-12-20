#include<iostream>

/**
    Single Level Inheritance
*/

using namespace std;

/// parent
class A{
    public:
    A(){
        cout<<endl<<"Constructor of A Called";
    }
};

/// child
class B : private A{
    public:
    B(){
        cout<<endl<<"Constructor of B Called";
    }
};

int main(){
    B b;
    return 0;
}
