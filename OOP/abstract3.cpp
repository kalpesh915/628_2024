#include<iostream>

using namespace std;

class Math{
    int x, y, z;

    public:
    void add(){
        cout<<endl<<"Enter value for x \t";
        cin>>x;
        cout<<endl<<"Enter value for y \t";
        cin>>y;
        z = x + y;
        cout<<endl<<"Result is "<<z;
    }

};

int main(){
    Math m;
    m.add();
    return 0;
}
