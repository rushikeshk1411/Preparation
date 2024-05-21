#include <iostream>
using namespace std;

class Animal{
    public:
    string sound;
    string name;
    int height;
    int weight;
};

class Dog : public Animal{
    
    
    public:
    string colour;
    
    void setsound (string sound){
        this->sound = sound;
    }
    void setname(string name){
        this->name = name;
    }
    string getname(){
        return name;
    }

    void print(){
        cout<<getname()<<endl;
    }
    

};

int main(){

    Dog Rocky;

    Rocky.setname("DADA");
    Rocky.setsound("BHO_BHO");
    //cout<<Rocky.getname()<<endl;
    Rocky.print();
    cout<<Rocky.height;

    return 0;
}