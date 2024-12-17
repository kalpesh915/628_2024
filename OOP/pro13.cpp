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
    Sample s1 = Sample(10);
    /// Sample s1 = new Sample(10); /// java syntax
    s1.printer();
}
