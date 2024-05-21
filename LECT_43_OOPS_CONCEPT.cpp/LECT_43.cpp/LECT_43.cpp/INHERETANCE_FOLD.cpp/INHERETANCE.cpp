#include <iostream>
using namespace std;

class Human{

    private:
    int age;

    
    public:
    int height;
    int weight;

    int getage (){
        return this->age;
    }

    int setweight(int weight){
        this->weight = weight;
    }
};

class Male : public Human{

    public: 
    string colour;

    void sleep(){
        cout<<"Male Sleeping";
    }
/*
    int getage(){
        return age;
    }
    */
};

int main(){

    Male Object1;
    
    //cout<<Object1.age<<endl;   // PRIVATE PUBLIC IS NOT ACCESABLE
    cout<<Object1.weight<<endl;
    cout<<Object1.height<<endl;
    cout<<Object1.colour<<endl;
    Object1.setweight(55);
    Object1.sleep();
    cout<<endl;
    cout<<Object1.weight<<endl;
 
   

    return 0;
}