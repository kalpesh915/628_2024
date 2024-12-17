#include<iostream>

using namespace std;

class Sample{
    public:
    Sample(){
        /// Constructor
        cout<<"\n Constructor of Sample Class Called";
    }

    void msg(){
        cout<<"\n Msg() Called";
    }
};

int main(){
    Sample s1, s2, s3, s4, s5;
}
