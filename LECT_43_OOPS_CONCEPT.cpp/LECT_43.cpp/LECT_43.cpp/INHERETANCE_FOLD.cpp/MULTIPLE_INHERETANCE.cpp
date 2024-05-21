#include <iostream>
using namespace std;

class Animal {

     public:
    string sound;
    string name;
    int height;
    int weight;

    void bark(){
        cout<<"BArking"<<endl;
    }

};

class Human {

    public:
    string colour;
    
    void speak(){
        cout<<"Speaking"<<endl;
    }
};



class Chimpaji : public Animal, public Human{

};

int main(){

    Chimpaji obj1;
    obj1.bark();
    obj1.speak();

}