#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;


int main(){

    //Creation of the map
    unordered_map<string, int>m;

    //Insertion 
    
    // 1
    pair<string, int>p = make_pair("Rushikesh", 4);
    m.insert(p);

    // 2
    pair<string, int>pair2("Rushikesh2", 5);
    m.insert(pair2);

    // 3
    m["meera"] = 1;

    //What will happen int this situation 
    //In this case it wil be updated
    m["meera"] = 2;

    //Searching
    cout<<m["meera"]<<endl;

    cout<<"Rushikesh: "<< m["Rushikesh"]<<endl;


    cout<<m["unknownkey"]<<endl;
    cout<<m.at("unknownkey")<<endl;

    //Size
    cout<<"Size is: "<<m.size()<<endl;

    //To Check presence
    cout<<"The Count/presence for Rushikesh is: "<<m.count("Rushikesh")<<endl;

    //Erase
    // m.erase("meera");

    // cout<<m.at("meera");
    cout<<"Size is: "<<m.size()<<endl;

    //Using for loop
    for(auto i:m)
        cout<<i.first<<": "<<i.second<<endl;

    cout<<endl;

    //using Interator
    unordered_map<string, int> :: iterator it = m.begin();

    while(it != m.end() ){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
}