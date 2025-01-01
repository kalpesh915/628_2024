/**
    Overloading
*/

#include<iostream>

using namespace std;

class Maths{
    public:
    void sum(int i, int j){
        cout<<endl<<" Sum is "<<i + j;
    }

    void sum(int i, int j, int k){
        cout<<endl<<" Sum is "<<i + j + k;
    }

    void sum(int i, int j, int k, int l){
        cout<<endl<<" Sum is "<<i + j + k + l;
    }
};

int main(){
    Maths m1;
    m1.sum(11, 22, 33, 44);
    return 0;
}

