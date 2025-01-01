/**
    Overloading
*/

#include<iostream>

using namespace std;

class Maths1{
    public:
    void sum(int i, int j){
        cout<<endl<<" Sum is (Parent) "<<i + j;
    }
};

class Maths2 : public Maths1{
    public:
    void sum(int i, int j){
        /// super::sum(i, j);
        cout<<endl<<" Sum is (Child) "<<i + j;
    }
};

int main(){
    Maths2 m2;
    m2.sum(11, 22);
    return 0;
}

