#include<iostream>
using namespace std;

class Student{
    private:
    int id;
    string name;

    public:
    Student(int tmp_id, string tmp_name){
        id = tmp_id;
        name = tmp_name;
    }

    Student(Student &tmp){
        id = tmp.id;
        name = tmp.name;
    }

    void printer(){
        cout<<"\n ID is "<<id<<" Name is "<<name;
    }
};

int main(){
    Student s1(11, "Raj");
    Student s2(s1);
    s1.printer();
    s2.printer();
}
