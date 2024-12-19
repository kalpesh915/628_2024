#include<iostream>

using namespace std;

class Employee{
    private:
    int eid;
    string ename;

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
        cout<<endl<<"Welcome "<<ename<<" Your Id is "<<eid;
    }

};

int main(){
    Employee emp1(1, "Raj");
    return 0;
}
