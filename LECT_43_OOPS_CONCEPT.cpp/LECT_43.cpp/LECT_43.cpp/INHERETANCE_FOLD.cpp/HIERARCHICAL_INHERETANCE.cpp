#include <iostream>
using namespace std;


class A{

    public:
    string speak;

    void speaking1 (){
        cout<<"HEllo I am from A"<<endl;
    }

};

class B : public A{

    public:

    void speaking2 (){
        cout<<"Hello I am from B"<<endl;
    }

};

class F : public A{

    public:

    void speaking3(){
        cout<<"Hello I am from C"<<endl;
    }

};

int main(){

    F Rushi;
    //Rushi.speaking2();
    Rushi.speaking3();
    Rushi.speaking1();

}