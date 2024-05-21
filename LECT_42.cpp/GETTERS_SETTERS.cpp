#include <iostream>
using namespace std;

class Hero {

    private:
    int health;


    public:
    char level;

    void Print(){
        cout<<level<<endl;
    }


    //Application of the getter is 
    // We are fetch or read the data
    int gethealth (){
        return health;
    }

    char getlevel(){
        return level;
    }

    // uses of the setter is
    // We are applying condition for example 
    /*

    void sethealth (int h , char name){
        if (name == "Rushikesh" ){
            health = h;
        }
    }

    */
    void sethealth (int h){
        health = h;
    }

    void setlevel (char ch){
        level = ch;
    }


};

int main(){

    Hero Ramesh;

    //USE OF THE GETTER
    cout<<"Ramesh health is : "<<Ramesh.gethealth()<<endl;

    // USE OF THE SETTER
    Ramesh.sethealth(100) ;

    cout<<"Ramesh health is: "<<Ramesh.gethealth()<<endl;

    //HOmework Padding
    cout<<"The size of Ramesh is: "<<sizeof(Ramesh)<<endl;

    return 0;
}