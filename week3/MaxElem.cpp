#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;

int findPeakIndex(int arr[],int size, int target){

  int s = 0;
  int  e = size - 1;
  int  m = s + (e-s)/2;
 
  while(s<e){

    if(arr[m]<arr[m+1]){
         s=m+1;
    }
    else{
      e=m;
    }
    m = s + (e-s)/2;
  }
  return s;
}


int main() {
  cout << "Hello world!" << endl;

  int target ; 
  int arr[] = {1,2,10,7,8,3};
  int size = sizeof(arr)/sizeof(int);
  cout<<size<<endl;

  cout<<"Enter the element you want to find first  occurence  in array "<<endl;
  cin>>target;

  int peakIndex = findPeakIndex(arr,size,target);

  cout<<"First Occurence  at index "<<peakIndex<<endl;


}