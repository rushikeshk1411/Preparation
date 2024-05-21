#include <iostream>
using namespace std;

class Hero {

    // BY default access modifier private hota hai isliye hamaine usako public kiya;
    public:
    int health;
    char level;

    // Private have only the scope of class

    private:
    int Networth;
    void Print (){
    cout<<"The Networth of the ramesh is"<<Networth<<endl;
    }

    // We will discuss Protected after when child class came in the picture;

};

int main(){

    //Instantiate object
    Hero Ramesh;

    //Set the value for class properties

    Ramesh.health = 78;
    Ramesh.level = 'A';

    // Now I want to print the health

    cout<<"The health of the ramesh is: "<<Ramesh.health<<endl;
    cout<<"The level of the Ramesh is: " <<Ramesh.level<<endl;
    

    return 0;
}