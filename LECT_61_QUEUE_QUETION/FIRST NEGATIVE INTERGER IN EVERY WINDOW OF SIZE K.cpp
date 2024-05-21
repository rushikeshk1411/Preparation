#include<iostream>
#include<vector>
#include<deque>
using namespace std;

void Output (vector<int> &arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
vector<int> printFirstNegativeInteger(int A[],int N, int K) {
  
  deque<int>dq;
  vector<int>ans;
  
  //For Processing 
  for(int i=0; i<K; i++){
      if(A[i] < 0)
          dq.push_back(i);
      }
  //Store ans of k size window;
  
  if(dq.size() > 0)
      ans.push_back(A[dq.front()]);
  else
      ans.push_back(0);
  
  //Baki windows ko bhi process kro
  for(int i=K; i<N; i++){
      
      //Pehala part to removal ka hona chahiye
      if(!dq.empty() && i - dq.front() >= K)
          dq.pop_front();
      
      if(A[i] < 0)
          dq.push_back(i);
      
      
      //Save kro bhai ans
      if(dq.size() > 0)
          ans.push_back(A[dq.front()]);
      else
          ans.push_back(0);
      
     
  }
  return ans;
 }

int main(){

    int arr[5] = {-8,2,3,-6,10};
    int N = 5;
    int K = 2;

    vector<int>ans = printFirstNegativeInteger(arr,N,K);

    Output(ans,N);


    return 0;
}