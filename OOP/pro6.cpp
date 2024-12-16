#include<iostream>
using namespace std;

class Sample{
    public:
    int ip; /// property / field

    void setIp(int tmp){
        this->ip = tmp;
    }

    void getIP(){
        cout<<"\n Value of ip is "<<this->ip;
    }
};

int main(){
    /// object

    Sample obj1, obj2;
    obj1.setIp(111);
    obj2.setIp(122);

    obj1.getIP();
    obj2.getIP();
}
