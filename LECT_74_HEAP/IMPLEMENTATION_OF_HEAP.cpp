#include<iostream>
#include<queue>
using namespace std;

class Heap{
    public:
    int arr[100];
    int size;

    Heap(){
        arr[0] = -1;
        size = 0;
    }

    void Indertval (int val){
        size = size+1;
        int index = size;
        arr[index] = val;

        while(index > 1){
            int parent = index/2;

            if(arr[parent] < arr[index]){
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else{
                return;
            }
        }
        
    }

    void print(){
        for(int i=1; i<=size; i++){
            cout<<arr[i]<<" ";
        } cout<<endl;
    }

    void Delete (){
        if(size == 0){
            cout<<"Nothing to delete"<<endl;
            return;
        }
        //Step-1 Last wali value dal do bhai
        arr[1] = arr[size];

        //Remove last element
        size--;


        //Aur us element ko sahi jagah pr dalo bhaisahab
        int i = 1;
        while(i<size){

            int leftindex = 2*i;
            int rightindex = 2*i + 1;

            if(leftindex < size && arr[i] < arr[leftindex]){
                swap(arr[i], arr[leftindex]);
                i = leftindex;
            }
            else if(rightindex < size && arr[i] < arr[rightindex]){
                swap(arr[i], arr[rightindex]);
                i=rightindex;
            }
            else{
                return;
            }
        }
    }
};

void Heapify (int arr[], int i, int n){

    int largest = i;
    int leftindex = 2*i;
    int rightindex = 2*i + 1;

    if(leftindex <= n && arr[leftindex] > arr[largest] ){
        largest=leftindex;
    }
    if(rightindex <= n && arr[rightindex] > arr[largest]){
        largest=rightindex;
    }

    if( i != largest){
        swap(arr[largest], arr[i]);
        Heapify(arr, largest, n);
    }
}


void HeapSort(int arr[], int n){

    int  size = n;

    while(size >= 1){
        //Step-1: Swap
        swap(arr[size], arr[1]);

        //Step-2: Size-- Krdo
        size--;

        //Step-3: Sahi jagah pr dal do
        Heapify(arr, 1, size);


    }
}

int main(){

    Heap h;

    h.Indertval(50);
    h.Indertval(55);
    h.Indertval(56);
    h.Indertval(40);
    h.Indertval(79);

    h.print();

    h.Delete();

    h.print();

    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;
    for(int i=n/2; i>0; i--){
        Heapify(arr, i, n);
    }

    cout<<"Printing the array"<<endl;

    for(int i=0; i<=n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //HeapSort
    HeapSort(arr, n);

    cout<<"Printing the Sorted array"<<endl;

    for(int i=0; i<=n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Using Prority Queue"<<endl;

    //max heap
    priority_queue<int>pq;
    
    pq.push(45);
    pq.push(23);
    pq.push(49);
    pq.push(68);

    cout<<"element of the top: "<<pq.top()<<endl;

    pq.pop();

    cout<<"element of the top: "<<pq.top()<<endl;

    if(pq.empty()){
        cout<<"pq is empty"<<endl;
    }
    else{
        cout<<"pq.is not empty"<<endl;
    }

    cout<<"The size of pq is: "<< pq.size() << endl;


    //MinHeap
    priority_queue<int, vector<int>, greater<int> >minheap;

    minheap.push(45);
    minheap.push(23);
    minheap.push(49);
    minheap.push(68);

    cout<<"element of the top: "<<minheap.top()<<endl;
    
    pq.pop();

    cout<<"element of the top: "<<minheap.top()<<endl;

    if(minheap.empty()){
        cout<<"minheap is empty"<<endl;
    }
    else{
        cout<<"minheap.is not empty"<<endl;
    }

    cout<<"The size of minheap is: "<< minheap.size() << endl;
    
    return 0;
}