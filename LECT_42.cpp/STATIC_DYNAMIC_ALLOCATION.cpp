#include <iostream>
using namespace std;

class Hero {

     private:
    int health;


    public:
    char level;
     int gethealth (){
        return health;
    }

    char getlevel(){
        return level;
    }

    void sethealth (int h){
        health = h;
    }

    void setlevel (char ch){
        level = ch;
    }
};


int main(){

    //Static Allocation
    Hero a;
    a.setlevel('B');
    a.sethealth(39);
    cout<<"the level is: "<<a.level<<endl;
    cout<<"The helth is: "<<a.gethealth()<<endl;


    //Dyanamic Allocation;
    Hero *b = new Hero;
    b->setlevel('A');
    b->sethealth(59);
    cout<<"The value of b is: "<<(*b).gethealth()<<endl;
    cout<<"The Health is : " <<(*b).getlevel();


    return 0;
}