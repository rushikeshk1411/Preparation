#include <iostream>
using namespace std;

void Print (int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int partition (int arr[], int s, int e){

    int pivot = arr[s];
    int count = 0;

    for (int i=s+1; i<=e; i++){
        if (pivot > arr[i]){
            count++;
        }
    }

//Place pivot at right place

    int PivotIndex = count + s;
    swap (arr[PivotIndex], arr[s]);

    // Check the condition which have right part be larger than the arr[pivotIndex] 
    // And left part be lower than rhe arr[pivotIndex]


     while(s < PivotIndex && e > PivotIndex){
       
        while (pivot > arr[s])
        s++;
        while (pivot < arr[e])
        e--; 

     if (pivot < arr[s] && pivot > arr[e] ){
            swap(arr[s++],arr[e++]);
        
    }
     }
     
        return PivotIndex;

}

void Quick_Sort (int arr[],int s, int e){

    //Base case 

    if (s>=e){
        return;
    }

    //Partition Karenge 

    int p = partition (arr,s,e);
 

    //Left wala Part sort karlo

    Quick_Sort (arr,s,p-1);



    //Right Wala Part sort karlo

    Quick_Sort (arr,p+1,e);


}


int main(){

    int arr[] = {1,4,63,6,2,6};

    Quick_Sort(arr,0,5);
    Print (arr,6);



    return 0;
}