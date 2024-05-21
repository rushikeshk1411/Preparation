#include <iostream>
using namespace std;

class A{
    public:
    void fun (){
        cout<<"Hello I am from class A"<<endl;
    }
};

class B : public A{
    public:
    void fun(){
        cout<<"Hello I am from class B"<<endl;
    }
};

int main(){

    B Rushi;
    Rushi.A :: fun();
    Rushi.B :: fun();

    return 0;
}