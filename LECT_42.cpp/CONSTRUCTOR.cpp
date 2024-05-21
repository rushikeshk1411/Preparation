#include <iostream>
 #include <cstring>
using namespace std;

class Hero {

        private:
    int health;


    public:
    char *name;
    char level;
    static int TimeTOComplete;

    Hero(){
        cout<<"I am a default constructor"<<endl;
        name = new char[100];
    }

   Hero(int health){
        this->level = level;
    }
    Hero (int health, char level){
        this -> level = level;
        this-> health = health;
       // cout<<"This of level is: "<<this<<endl;
    }

    /*
    //WE ARE MAKING COPY CONTRUCTOR FOR OUR UNDERSTANDING NOT FOR OTHER IS SAME CONSTRUCTOR IS 
    // AKREADY PRESENT IN THE SYSTEM
    */

    //This is like a Deep Copy;
    Hero (Hero &temp){
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name = ch;
       
        this->health = temp.health;
        this->level = temp.level;
    } 

    void print(){
        cout<<"[ "<<this->name;
        cout<<", "<<this->health;
        cout<<", "<<this->level<<" ]"<<endl;
        //cout<<"Yes now this is my time only"<<endl;
    }

    int gethealth(){
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

    //This is for shallow and deep copy;
    void setname (char name[]){
        strcpy(this->name, name);
    }

    //STATIC FUNCTION
    static int random(){
        return TimeTOComplete;
    }

    // DISTRUCTUR HAVE SAME NAME BUT ONLY DIFFRENCE IS THAT THEY HAVE TILDA SIGN "~" ONLY';

    ~Hero(){
        cout<<"Distructor BHai call"<<endl;
    }

    //USE OF STATIC KEYWORD
    int Hero :: TimeTOComplete = 20;

};


int main(){

    //STATIC KEYWORD KA USE KR LETE HAI

    //cout<<Hero::TimeTOComplete <<endl;

    cout<<"call the random fuction"<<Hero::random()<<endl;


 


/*
    //const KEYWORD

    const int n = 10;
    const int x = 100;
    int sum = n+x;
    cout<<"The sum is: "<<sum<<endl;
    //Hum aisa nahi kr sakte becuase the n is const and const value can't be change;
    // n++;


    //Ham function main bhi i++ or any increment nahi kar sakte;
    //TO SAMBHAL KE BHAIYA VARNA ACCIDENT HO JAYEGA;

*/

    /*

//DISTRUCOT 
    //Statically allocate ke liye distructor automaticaa=lly call ho jata hai;
    Hero Ramesh;

    //Dyanamically created
    //Dyanamically created ke liye manually distructor manual call karna padata hai;
    Hero * Umesh = new Hero();
    delete Umesh;

*/
/*
//SHALLOW AND DEEP COPY
Hero h;

h.sethealth(34);
h.setlevel('C');
char name[10] = "Rushikesh";
h.setname(name);
h.print();

//Make changes
h.name[0] = 'Z';

//Use default copy constructor and create new hero;

Hero B (h);
//Same as copy Constructor
//Hero B = h;
B.print();

//COPY ASSIGNMENT;

h=B;
h.print();
B.print();

*/















/*
    Hero Suresh(70,'C');
    Suresh.print();

//Copy constrictor genertae hota hai;
    Hero Ritesh (Suresh);
    Ritesh.print();



 return 0;
 */

// BELOW CODE IS FOR PARAMETERIZED AND DEFAULT CONSTRUCTOR
/*
    //Constuctor call ho jata hai
    //Statically object created;
    Hero Ramesh(10);
    Hero Temp(10,'C');

    Ramesh.print();

    Hero *A = new Hero(10);
    A->print();

    Hero temp(10,'B') ;
    temp.print();

    //Dyanamically object created

    // Hero *H = new Hero;

//We are creating without block also;
    // Hero *J = new Hero();

    cout<<"The address of the ramesh is : "<<&Ramesh<<endl;
*/
    

   
return 0;

}