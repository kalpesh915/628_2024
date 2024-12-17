#include<iostream>
using namespace std;

class Box{
    private:
    int h, w, b;

    public:

    /// default parameter
    Box(int i = 1, int j = 1, int k = 1){
        h = i;
        w = j;
        b = k;
        printer();
    }

    ~Box(){
        cout<<"\n Destructor Called";
    }

    void printer(){
        cout<<"Volume of Box is "<<h*w*b;
    }
};

int main(){
    Box b1(1,4,5);
}
