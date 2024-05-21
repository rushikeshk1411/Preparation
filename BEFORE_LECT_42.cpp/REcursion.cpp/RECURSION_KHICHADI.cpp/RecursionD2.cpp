#include <iostream>
using namespace std;

void ReacherHome (int src, int Dest){

cout<<"source"<<src<<" : Destination"<<Dest<<endl;
//Base Case 
if (src== Dest){
    cout<<"BHau attach Pohocalo";
    return ;
}

//Processing 
src++;

//REcursion Condition kaun likhega

ReacherHome(src,Dest);


}

int main(){
    int src = 0;
    int Dest = 11;

    ReacherHome(src,Dest);
    return 0;
}