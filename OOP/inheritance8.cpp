/**
    HSA - A
*/

#include<iostream>

using namespace std;

class Address{
    public:
    string addressline1, addressline2, city, state;
    int zipcode;

    Address(string addressline1, string addressline2, string city, string state, int zipcode){
        this->addressline1 = addressline1;
        this->addressline2 = addressline2;
        this->city = city;
        this->state = state;
        this->zipcode = zipcode;
    }
};

class Employee{
    public:
    int empid;
    string fname, lname, department, designation;
    Address *address;

    Employee(int empid, string fname, string lname, string department, string designation, Address *address){
        this->empid = empid;
        this->fname = fname;
        this->lname = lname;
        this->department = department;
        this->designation = designation;
        this->address = address;
    }

    void display(){
        cout<<endl<<"Welcome "<<fname<<" "<<lname<<" to "<<department<<" you are "<<designation;
        cout<<endl<<"Address is "<<address->addressline1<<" "<<address->addressline2<<" "<<address->city<<" "<<address->state<<" "<<address->zipcode;
    }
};


int main(){
    Address myAddress = Address("Kalawad Road", "Near Kansagra College", "Rajkot", "Gujarat", 360005);
    Employee employee = Employee(12, "Raj", "Makwana", "IT", "Developer", &myAddress);
    employee.display();
    return 0;
}

