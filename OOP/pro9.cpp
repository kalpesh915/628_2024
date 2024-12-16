#include<iostream>
using namespace std;

class Student{
    public:
    int id;
    string name;

    void setData(int id1, string name1){
        id = id1;
        name = name1;
    }

    void getData(){
        cout<<endl<<"Welcome "<<name<<" your id is "<<id;
    }
};

int main(){
    Student s1, s2, s3, s4;

    s1.setData(11, "Raj");
    s2.setData(12, "Vrajesh");
    s3.setData(13, "Krishan");
    s4.setData(14, "Dhrumil");

    s1.getData();
    s2.getData();
    s3.getData();
    s4.getData();
}
