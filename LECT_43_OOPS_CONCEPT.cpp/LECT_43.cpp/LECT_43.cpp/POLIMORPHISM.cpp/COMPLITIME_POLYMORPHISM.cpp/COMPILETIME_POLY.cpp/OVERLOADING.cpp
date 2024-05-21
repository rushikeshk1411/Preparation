#include <iostream>
using namespace std;

class A {


    public:
    void Sayhello(){
        cout<<"SAY HALLOW"<<endl;
    }
    void Sayhello(string name){
        cout<<"say hellow"<<endl;
    }
    int Sayhello (char name){
        return 1;
    }


};



int main(){

    A rushi;
    rushi.Sayhello("Rushi");
    rushi.Sayhello('R');
    rushi.Sayhello();

    return 0;
}