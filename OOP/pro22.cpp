#include<iostream>

using namespace std;

class Employee{
    public:
    int eid;
    string ename;
    static string company;

    Employee(int eid, string ename){
        this->eid = eid;
        this->ename = ename;
        printer();
    }

    void printer(){
        cout<<endl<<"Welcome "<<ename<<" Your Id is "<<eid<<" Company is "<<company;
    }
};

string Employee::company = "FlexBox";

int main(){
    cout<<Employee::company;
    return 0;
}
