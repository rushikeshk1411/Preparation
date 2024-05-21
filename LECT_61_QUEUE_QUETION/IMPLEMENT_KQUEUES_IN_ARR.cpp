#include<iostream>
using namespace std;

class kqueue {

    public:
    int k;
    int* arr;
    int size;
    int* next;
    int* rear;
    int* front;
    int freespot;

    kqueue(int n, int k){
        size = n;
        this->k = k;
        arr = new int[size];
        rear = new int[k];
        front = new int[k];

        for(int i=0; i<k; i++){
            rear[i] = -1;
            front[i] = -1;
        }

        next = new int[size];
        for(int i=0; i<n; i++){
            next[i] = i+1;
        
        }
        next[n-1] = -1;
        freespot = 0;
    }

    bool enqueue(int val, int q){

        //Step-1 this condition shows the stack is full;
        if(freespot == -1){
            return false;
        }

        //Step-2 Find the index where i can insert
        int index = freespot;

        //Step-3 update the freespot
        freespot = next[index];

        //Step-4 Check whether is the first element or not
        if(front[q-1] == -1){
            front[q-1] = index;
        }
        else{
            //Link new element to the previous;
            next[rear[q-1]] == index;
        }

        //Step-4 next ko update kr do
        next[index] = -1;

        //Step-5 update the rear
        rear[q-1] = index;

        //Step-6 Push Element
        arr[index] = val;



    
    }
        
};

int main(){

    return 0;
}