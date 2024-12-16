#include<iostream>
using namespace std;

class Student{
    public:
    int id;
    string name;
};

int main(){
    Student s1, s2;

    s1.id = 100;
    s1.name = "Raj";

    s2.id = 101;
    s2.name = "Dhrumil";

    cout<<endl<<s1.id<<" "<<s1.name;
    cout<<endl<<s2.id<<" "<<s2.name;
}
