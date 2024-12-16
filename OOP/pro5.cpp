#include<iostream>
using namespace std;

class Sample{
    public:
    int ip; /// property / field
};

int main(){
    /// object

    Sample obj1, obj2;

    obj1.ip = 100;
    cout<<"value of ip in obj1 is "<<obj1.ip;

    obj2.ip = 150;
    cout<<"value of ip in obj2 is "<<obj2.ip;
}
