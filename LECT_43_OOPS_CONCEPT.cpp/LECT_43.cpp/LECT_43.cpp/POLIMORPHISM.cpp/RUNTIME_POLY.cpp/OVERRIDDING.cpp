#include <iostream>
using namespace std;

class Animal{
    public:

    void Speaking (){
        cout<<"Speaking";
    }
};
class Dog : public Animal{

    public:
    void speaking(){
        cout<<"Barking";
    }
};

int main(){

    Dog hello;

    hello.speaking();


    return 0;
}