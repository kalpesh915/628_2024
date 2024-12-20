#include<iostream>

/**
    Single Level Inheritance
*/

using namespace std;

/// parent
class Greetings{
    private:
    void msg(){
        cout<<endl<<"Msg()";
    }

    public:
    void gm(){
        cout<<endl<<"Good Morning";
    }

    void gn(){
        cout<<endl<<"Good Noon";
    }
};

/// child
class Greetings1 : public Greetings {
    public:
    void ge(){
        cout<<endl<<"Good Evening";
    }

    void gnt(){
        cout<<endl<<"Good Night";
    }
};

int main(){
    Greetings1 g1;

    g1.gm();
    g1.gn();
    g1.ge();
    g1.gnt();
    return 0;
}
