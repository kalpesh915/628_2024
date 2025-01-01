/**
    Function Overloading and Ambiguity
*/

#include<iostream>

using namespace std;

class Math{
    public:
    void sum(int i, int j){
        cout<<endl<<"Sum is "<<i + j;
    }

    void sum(int i, int j, int k){
        cout<<endl<<"Sum is "<<i + j + k;
    }
};


int main(){
    Math m;
    m.sum(11, 22);
    m.sum(11, 22, 33);
}

