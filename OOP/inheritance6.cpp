#include<iostream>

/**
    Multi Level Inheritance
*/

using namespace std;

/// parent
class Math1{
    public:
    int sum(int i, int j){
        cout<<endl<<"Sum is "<<i + j;
    }
    int sub(int i, int j){
        cout<<endl<<"Sub is "<<i - j;
    }
};

/// child
class Math2 : public Math1{
    public:
    int div(int i, int j){
        cout<<endl<<"Div is "<<i / j;
    }
    int mul(int i, int j){
        cout<<endl<<"Mul is "<<i * j;
    }
};

class Math3 : public Math2{
    public:
    int mod(int i, int j){
        cout<<endl<<"Mod is "<<i % j;
    }
};

int main(){
    Math3 m3;

    m3.sum(111, 22);
    m3.sub(111, 22);
    m3.mul(111, 22);
    m3.div(111, 22);
    m3.mod(111, 22);
    return 0;
}
