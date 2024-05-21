#include<iostream>
using namespace std;

class heap{

    public:
    int arr[100];
    int size = 0;


    void Insert(int val){
        size = size + 1;
        int index = size;
        arr[index] = val;

        while(index > 1){
            int parent = index/2;
            if(arr[index] < arr[parent] ){
                swap(arr[index], arr[parent]);
                index = parent;
            }
            else{
                return;
            }
        }
    }

    void Delete(){

        if(size == 0){
            cout<<"NOthong to delete" <<endl;
        }


        
        arr[1] = arr[size];
        size--;
        int i = 1;
        
        while(i<size){

        int Rightindex = i * 2 +1;
        int leftindex = i * 2;

            if(arr[Rightindex] > arr[i] ){
                swap(arr[Rightindex], arr[i]);
                i = Rightindex;
            }
            else if(arr[i] < arr[leftindex]){
                swap(arr[leftindex], arr[i]);
                i = leftindex;
            }
            else{
                return;
            }
        }
        
       
    }

    void print (){
        for(int i=1; i<=size; i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }

};

void Heapify(int arr[], int size, int i){

    int largest = i;
    int leftindex = 2*i;
    int rightindex = 2*i + 1;

    if(leftindex < size && arr[largest] < arr[leftindex])
        largest = leftindex;

    if(rightindex < size && arr[largest] < arr[rightindex])
        largest = rightindex;

    if(largest != i){
        swap(arr[largest], arr[i]);
        Heapify(arr, size, largest);
    }
}

void HeapSort (int arr[], int n){
    int size = n;

    while(size > 0){
        swap(arr[1], arr[size]);
        size--;

        Heapify(arr, size, 1);
    }
}

int main(){
    heap p;
    p.Insert(5);
    p.Insert(10);
    p.Insert(13);
    p.Insert(14);

    p.print();

    p.Delete();

    p.print();

    int arr[9] = {-1, 54, 65, 76, 54, 32, 98, 656, 87};
    Heapify(arr, 8, 1);
    int n = 8;
    for(int i=n/2; i>0; i--){
        Heapify(arr,n, i);
    }

    cout<<"Printing the array"<<endl;

    for(int i=1; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    HeapSort(arr, n);

    cout<<"Printing the HeapSort"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

}
