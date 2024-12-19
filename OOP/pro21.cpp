#include<iostream>

using namespace std;

class Employee{
    private:
    int eid;
    string ename;
    static string company;

    public:
    Employee(int eid, string ename){
        this->eid = eid;
        this->ename = ename;
        /**
            this->eid = current object eid variable
            eid = constructor eid variable
        */
        /// this->printer();
        printer();
    }

    void printer(){
        cout<<endl<<"Welcome "<<ename<<" Your Id is "<<eid<<" Company is "<<company;
    }
};

string Employee::company = "FlexBox";

int main(){
    Employee emp1(1, "Raj");
    Employee emp2(2, "Krishn");
    Employee emp3(3, "Vrajesh");
    Employee emp4(4, "Dhrumil");
    return 0;
}
