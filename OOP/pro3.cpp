#include<iostream>
using namespace std;

class Sample{
    int ip; /// property / field
};

int main(){
    /// object

    Sample obj;

    obj.ip = 100;
    cout<<"value of ip is "<<obj.ip;
}
