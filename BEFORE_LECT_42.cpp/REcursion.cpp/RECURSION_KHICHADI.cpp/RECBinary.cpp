#include <iostream>
using namespace std;

bool BinarySearch (int arr[], int s, int e, int key ) {

    //Base  case 
        //Base case for the false solutiom
    if (s > e){
        return false ;
    }
    int mid = s + (e -s)/2;
    //Base case for true solution
    if (arr[mid] == key){
        return true;
    }

    //Now we will procces to the further procces okk

    if (arr[mid] < key){
         BinarySearch ( arr,mid + 1,e, key );
       
    }
    else {
         BinarySearch ( arr,s, mid - 1, key );
    
    }
}

int main(){

int arr [8] = {1,3,7,8,44,55,87,90,};
int s = 0;
int e = 8;
int key = 99;
//int mid = s + (e-s)/2;

 bool ans = BinarySearch ( arr,s,e, key );
 cout<<"1 for the true and 0 for the false"<<endl<< ans <<endl;

    return 0;
}