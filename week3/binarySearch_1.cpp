#include <iostream>
#include<algorithm>
using namespace std;

int binarySearching(int arr[],int size, int target){

  int s = 0;
  int  e = size - 1;
  int  m = s + (e-s)/2;
  while(s<=e){

    if(arr[m]>target){
      e = m-1;
      
    }
    else if(arr[m]<target){
      s = m+1;
      
    }
    else if(arr[m]==target){
      return m;
    }
    m = s + (e-s)/2;
  }
  return -1;
}
int main() {
  cout << "Hello world!" << endl;

  int target ; 
  int arr[] = {1,5,10,18,112,190,500};
  int size = sizeof(arr)/sizeof(int);
  cout<<size<<endl;

  cout<<"Enter the element you want to find in array "<<endl;
  cin>>target;



  int foundAtIndex = binarySearching(arr,size ,target);
  
  if(foundAtIndex==-1){
      cout<<"Not Found"<<endl;
  }
  else{
    cout<<"Found at index "<<foundAtIndex<<endl;
  }

   cout<<"By Trick directly"<<endl;
   if(binary_search(arr,arr+size,500)){
    cout<<"Found"<<endl;
   }
   else{
    cout<<"Not Found"<<endl;
   }
   // in vector -> binary_search(arr.begin(),arr.end(),target);
   
  cout<<"Finding arr trick"<<endl;
  cout<<arr+size<<endl;
  return 0;
}