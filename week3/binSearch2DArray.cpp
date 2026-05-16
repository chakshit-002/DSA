#include <iostream>
using namespace std;

int binSearchIn2DArray(int n, int a[][4],int size){
// int size1 = sizeof(a)/sizeof(a[0][0]);// it gives error here because row is not given to array in upper line
  int s = 0, e = size, mid = s+(e-s)/2;

  while(s<=e){
    int rowIndex = mid/4;
    int colIndex = mid%4;

    if(a[rowIndex][colIndex]==n){
      return  mid;
    }
    else if(a[rowIndex][colIndex] < n){
      s=mid+1;
    }
    else{
      e=mid-1;
    }
    mid=s+(e-s)/2;
  }

  return -1;
}

int main() {
  cout << "Hello world!" << endl;

  int a[][4] = {{2,3,4,5},{6,7,8,9},{10,11,12,13},{14,15,17,18}};
  int size = sizeof(a)/sizeof(a[0][0]);
  int n; 
  cout<<"Enter the element to search"<<endl;
  cin>>n;
  cout<<size<<endl;
  int ans = binSearchIn2DArray(n,a,size);
//  int cols = sizeof(a[0]) / sizeof(a[0][0]); 
  if(ans){
    int rowIndex = ans/4;
    int colIndex = ans%4;
    cout<<"Element found "<< a[rowIndex][colIndex] <<" at index in 2d is ";
    cout<< rowIndex <<","<< colIndex <<" and linear is "<< ans <<endl;
  }
  else{
    cout<<"Not Found"<<endl;
  }


  // [i,j] = c*i+j idhar se rowindex,colindex ka formulae 

  return 0;
}