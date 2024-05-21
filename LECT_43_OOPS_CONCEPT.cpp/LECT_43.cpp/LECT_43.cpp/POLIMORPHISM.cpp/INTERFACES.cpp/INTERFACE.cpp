#include <iostream>
using namespace std;

class A{
    public:
    //What is the keyword
    virtual void sleeping() = 0;

    void reading (){
        cout<<"Bhai read kr lo"<<endl;
    }
    };

class B : public A {
    public:
    void sleeping (){
        cout<<"I am sleep brother"<<endl;
    }
};

int main(){

    B name;
    name.sleeping();
    name.reading();

    return 0;
}