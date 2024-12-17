#include<iostream>
using namespace std;

class Box{
    private:
    int h, w, b;

    public:
    Box(){
        h = w = b = 1;
    }

    Box(int i){
        h = w = b = i;
    }

    Box(int i, int j){
        h = w = i;
        b = j;
    }

    Box(int i, int j, int k){
        h = i;
        w = j;
        b = k;
    }

    void printer(){
        cout<<"Volume of Box is "<<h*w*b;
    }
};

int main(){
    Box b1(5, 10, 8);
    b1.printer();
}
