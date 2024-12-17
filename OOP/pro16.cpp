#include<iostream>
using namespace std;

class Box{
    private:
    int h, w, b;

    public:
    Box(){
        h = w = b = 1;
        printer();
    }

    Box(int i){
        h = w = b = i;
        printer();
    }

    Box(int i, int j){
        h = w = i;
        b = j;
        printer();
    }

    Box(int i, int j, int k){
        h = i;
        w = j;
        b = k;
        printer();
    }

    void printer(){
        cout<<"Volume of Box is "<<h*w*b;
    }
};

int main(){
    Box b1(5, 10, 8);
}
