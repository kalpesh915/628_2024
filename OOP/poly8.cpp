/**
   operator overloading
*/

#include<iostream>

using namespace std;

class Box{
    public:
    int h, w, b;

    int volume(){
        return h * w * b;
    }

    void setDimention(int h1, int w1, int b1){
        h = h1;
        w = w1;
        b = b1;
    }

    Box operator + (Box &tmp){
        Box b1;
        b1.setDimention(this->h + tmp.h, this->w + tmp.w, this->b + tmp.b);
        return b1;
    }

    Box operator - (Box &tmp){
        Box b1;
        b1.setDimention(this->h - tmp.h, this->w - tmp.w, this->b - tmp.b);
        return b1;
    }
};


int main(){
    Box b1, b2, b3;

    b1.setDimention(10, 10, 10);
    b2.setDimention(4, 5, 6);

    cout<<endl<<"Volume of Box 1 is "<<b1.volume();
    cout<<endl<<"Volume of Box 2 is "<<b2.volume();

    ///b3 = b1 + b2;
    b3 = b1 - b2;
    cout<<endl<<"Volume of Box 3 is "<<b3.volume();
}

