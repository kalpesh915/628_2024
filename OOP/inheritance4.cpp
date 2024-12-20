#include<iostream>

/**
    Single Level Inheritance
*/

using namespace std;

/// parent
class A{
    private:
    int ip1 = 10, ip2 = 5;

    protected:
    int sum(){
        return ip1 + ip2;
    }
};

/// child
class B : private A{
    public:
    void display(){
        int ans = sum();
        cout<<endl<<"Sum is "<<ans;
    }
};

int main(){
    B b;
    b.display();
    ///b.sum();
    return 0;
}
