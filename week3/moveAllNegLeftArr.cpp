#include <iostream>
using namespace std;

int main() {
  cout << "Hello world!" << endl;
  // int arr[]= {1,2,-5,-3,8,9,0,-1, -1, 0,1};
  int arr[] = {0,-1,0};
  int n=sizeof(arr)/sizeof(int);
  int s=0;
  int e = n-1;
  int i=0;
  //3pionter 
  // while (s<=e){
  //   if(arr[i]<0){
  //    swap(arr[s],arr[i]);
  //    i++;
  //    s++;
  //   }
  //   else{
  //   swap(arr[i],arr[e]);
  //     e--;
  //   }
  // }
// 2pointer
  while(s<=e){
    if(arr[s]<0){
      s++;
    }
    else{
      swap(arr[s],arr[e]);
      e--;
    }
  }

  for(auto val:arr){
    cout<<val<<" ";
  }

  return 0;
  
}