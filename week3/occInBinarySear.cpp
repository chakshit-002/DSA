#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;

int firstOccurenceBinarySearch(int arr[],int size, int target){

  int s = 0;
  int  e = size - 1;
  int  m = s + (e-s)/2;
  int ans = -1;
  while(s<=e){

    if(arr[m]>target){
      
      e=m-1;
    }
    else if(arr[m]<target){
      s = m+1;
      
    }
    else if(arr[m]==target){
      ans = m;
      e = m-1;
    }
    m = s + (e-s)/2;
  }
  return ans;
}


int lastOccurenceBinarySearch(int arr[],int size, int target){

  int s = 0;
  int  e = size - 1;
  int  m = s + (e-s)/2;
  int ans = -1;
  while(s<=e){

    if(arr[m]>target){
      
      e=m-1;
    }
    else if(arr[m]<target){
      s = m+1;
      
    }
    else if(arr[m]==target){
      ans = m;
        s = m+1;
    }
    m = s + (e-s)/2;
  }
  return ans;
}
int main() {
  cout << "Hello world!" << endl;

  int target ; 
  int arr[] = {1,4,8,9 ,9,9,9,9,10,11,11,11,12,15,18};
  int size = sizeof(arr)/sizeof(int);
  cout<<size<<endl;

  cout<<"Enter the element you want to find first  occurence  in array "<<endl;
  cin>>target;

  int firstOcc = firstOccurenceBinarySearch(arr,size,target);

  cout<<"First Occurence  at index "<<firstOcc<<endl;

  int lastOcc =  lastOccurenceBinarySearch(arr,size,target);

  cout<<"Last Occurence at index"<<lastOcc<<endl;


  //trick way 
  vector<int> v{1,4,8,9 ,9,9,9,9,10,11,11,11,12,15,18};

  auto low = lower_bound (v.begin(),v.end(),target);
 auto low = lower_bound (v.begin(),v.end(),target);

  cout<<"First Occurence index  by predefined function "<<low-v.begin() <<endl;

  auto up = upper_bound(v.begin(),v.end(),target);
  cout<<"last occurence index by predefined function "<<up-v.begin()<<endl;

}