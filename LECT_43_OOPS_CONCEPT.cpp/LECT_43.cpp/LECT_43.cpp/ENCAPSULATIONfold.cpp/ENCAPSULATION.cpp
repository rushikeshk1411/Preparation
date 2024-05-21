#include <iostream>
using namespace std;

class Student {
    private:
    int roll_no;
    string name;
    int age;
    int height;
    int weigt;

    public:
    int getage(){
        return age;
    }

};


int main(){

    Student Rushikesh;

    cout<<"The age is: "<<Rushikesh.getage()<<endl;



    return 0;
}