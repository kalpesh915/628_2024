#include<iostream>
using namespace std;

class Sample{
    private:
    int x;

    public:
    Sample(int tmp){
        x = tmp;
    }

    void printer(){
        cout<<"\n value of x is "<<x;
    }
};

int main(){
    Sample s1(10);
    Sample s2(20);
    Sample s3(30);
    s1.printer();
    s2.printer();
    s3.printer();
}
