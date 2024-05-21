#include <iostream>
using namespace std;
/*
void UpDATE (int **ptr){
    ptr = ptr + 1;

    //Kya isase kya hoga

    *ptr = *ptr + 1;

    //Kya isase kya hoga
  
    **ptr = **ptr + 1;


}
*/
int main(){

/*
    int i = 234;
    int *ptr = &i;
    int **ptr2 = &ptr;

    cout<<"The value of i is : "<<i<<endl;
    cout<<"The value of i is : "<<*ptr<<endl;
    cout<<"The value of i is : "<<**ptr2<<endl;

    //Now I am finding the ptr value

    cout<<"The value of p is : "<<ptr<<endl;
    cout<<"The value of p is : "<<&i<<endl;
    cout<<"The value of p is : "<<*ptr2<<endl;

    //NOw we want to print an value which in the ptr2

    cout<<ptr2<<endl;
    cout<<&ptr<<endl;

    cout<<"Before"<<i<<endl;
    cout<<"Before"<<*ptr<<endl;
    cout<<"Before"<<**ptr2<<endl;
    UpDATE(ptr2);
    cout<<"After"<<i<<endl;
    cout<<"After"<<*ptr<<endl;
    cout<<"After"<<**ptr2<<endl;


int first = 8;
int second = 11;
int *third = &second;
first = *third;
*third = *third + 2;

cout<<first<<" "<<second<<endl;

*/

int arr[5];
int *ptr;
cout<<sizeof(arr)<<" "<<sizeof(*ptr)<<endl;
   
    return 0;
}