#include <iostream>
using namespace std;

class A{
    public:
    void fun1(){
        cout<<"I am from fun1"<<endl;
    }

};

class B : public A{
    public:
    void fun2(){
        cout<<"I am from fun2"<<endl;
    }
};

class C : public A{

    public:
    void fun3(){
        cout<<"I am from fun3"<<endl;
    }
};

class D : public C{
    public:
    void fun4(){
        cout<<"I am from fun4"<<endl;
    }
};

class E : public D{
    public:
    void fun5(){
        cout<<"I am from fun5"<<endl;
    }
};


int main(){

    A Rushi;
    Rushi.fun1();
    
    E shubham;
    shubham.fun1();
    shubham.fun3();
    shubham.fun4();
    shubham.fun5();

}