#include<iostream>

using namespace std;

class RBI{
    public:
    virtual void ATM() = 0;
    virtual void Cheque() = 0;
    virtual void UPI() = 0;
};

class SBI : public RBI{
    public:
    void ATM(){
        cout<<endl<<"SBI Provide ATM Service";
    }
    void Cheque(){
        cout<<endl<<"SBI Provide Cheque Service";
    }
    void UPI(){
        cout<<endl<<"SBI Provide UPI Service";
    }
};

class Nagrik : public RBI{
    public:
    void ATM(){
        cout<<endl<<"Nagrik Bank Provide ATM Service";
    }
    void Cheque(){
        cout<<endl<<"Nagrik Bank Provide Cheque Service";
    }
    void UPI(){
        cout<<endl<<"Nagrik Bank Not Provide UPI Service";
    }
};

int main(){
    SBI sbi;
    Nagrik nagrik;
    sbi.ATM();
    sbi.Cheque();
    sbi.UPI();

    nagrik.ATM();
    nagrik.Cheque();
    nagrik.UPI();
    return 0;
}
