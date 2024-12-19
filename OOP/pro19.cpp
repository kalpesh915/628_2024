#include<iostream>

using namespace std;

class Employee{
    private:
    int eid;
    string ename;

    public:
    Employee(int teid, string tename){
        eid = teid;
        ename = tename;

        printer();
    }

    void printer(){
        cout<<endl<<"Welcome "<<ename<<" Your Id is "<<eid;
    }

};

int main(){
    Employee emp1(1, "Raj");
    return 0;
}
