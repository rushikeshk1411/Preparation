#include <iostream>
using namespace std;
void Print(int arr[], int s, int e){

for (int i=s; i<=e; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}

int Partition (int arr[], int s, int e){

int PivotPoint = arr[s];
int count = 0;

for(int i=s+1; i<=e; i++){
    if (arr[i] < PivotPoint){
        count++;
    }
}
int PivotIndex = s + count;
swap (arr[PivotIndex], arr[s]);

/*
Ab tak hamain kya nikala hainjara usaki list to bana do na bhaiya
1) hamane first index kepoint ko Pivot point maan liya aur waise chal pade
2) Hamane Ek count variable assign kar diya.
3) For l0op se array transverse kar liya aur jab hamain s se koi chhota milata 
   hail tab hum count ko ++ kar de rahe hai
4) Baad main hum ne Pivot index nikal liya s + count karke aur wo PivotElement 
   Waha par place kar diya
 */

int i=s;
int j=e;

while(i < PivotIndex && j > PivotIndex){
    while (PivotPoint >= arr[i]){
        i++;
    }
    while (PivotPoint < arr[j]){
        j--;
    }
    if (i < PivotIndex && j > PivotIndex){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}
return PivotIndex;


}

void QuickSort (int arr[], int s, int e){
Print(arr,s,e);
//Base Case
if (s >= e){
    return ;
}

//Partition karna hai bhai hamein

int p  = Partition (arr,s,e);

//Left Part Sort Karon

QuickSort(arr, s, p-1);

//Right Part Sort Krlo Bhai

QuickSort (arr,p+1, e);

}

int main(){
int arr[9] = {8,3,5,7,9,23,54,2,6};

QuickSort(arr,0,8);

cout<<"The answe is : " ;
Print(arr,0,8);
    return 0;
}