#include<iostream>

using namespace std;

class Box{
    public:
    int h, w, b;

    Box(int h, int w, int b){
        this->h = h;
        this->w = w;
        this->b = b;
    }

    friend void boxVolume();
};

void boxVolume(Box box){
    cout<<endl<<"Volume of Box is "<<box.h * box.w * box.b;
}

int main(){
    Box b1(3, 5, 7);
    boxVolume(b1);
    return 0;
}
