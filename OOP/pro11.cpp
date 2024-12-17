#include<iostream>
using namespace std;

class Sample{
    private:
    int x;

    public:
    Sample(){
        x = 10;
    }

    void printer(){
        cout<<"\n value of x is "<<x;
    }
};

int main(){
    Sample s1, s2, s3;
    s1.printer();
    s2.printer();
    s3.printer();
}
