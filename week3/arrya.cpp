#include <iostream>
using namespace std;


void  manipulationArray(int arr[], int size){
  cout<<endl;
  int ans =  0;
  for(int i =0; i<size; i++){
    ans =  ans +  arr[i];
    cout<<arr[i]<<" ";
  }

  cout<<endl;
  cout<<ans<<endl;

  arr[3] = 10;
  arr[4] = 14;
  ans = 0; 
  cout<<"value of arr in manipulated funciton "<<endl;
  for(int i =0; i<size; i++){
    ans =  ans +  arr[i];
    cout<<arr[i]<<" ";
  }

    cout<<endl;
  cout<<ans<<endl;
}
int main() {
  cout << "Hello world!" << endl;
  
  
  
  
  int a1[] = {1,2,3,4};
  //a1.length() , a1.size(),  not exists
  // size is find out by  this way 
  int size =  sizeof(a1)/sizeof(int);

  for(int i =0; i<size; i++){
    cout<<a1[i];
  } 

  int n ;
  //bad method ho toh jaega ese lkin worst way  
  // int a2[n];
// cin >>n;
//good way  but bad practice 
cin >>n;
int a2[n];
int sizea2 =  sizeof(a2)/sizeof(int);
cout<<endl;
cout<<sizea2<<endl;
 for(int i =0; i<n; i++){
    cin>>a2[i];
  } 

 for(int i =0; i<n; i++){
    cout<<a2[i];
  } 
  
  cout<<endl;

  // int a3[6] = {1,, 3,4};   ese khalli nahi rkh skte hai 
  int a3[6] = {1,3,5};
  int sizea3 =  sizeof(a3)/sizeof(int);
  for(int i =0; i<sizea3; i++){
    cout<<a3[i];
  } 

  cout<<endl;  
  //base address 
  cout<<a3<<endl;
  cout<<&a3<<endl;


  manipulationArray(a3,sizea3);
cout<<"value of arra after function manupatlated"<<endl;
 for(int i =0; i<sizea3; i++){
    cout<<a3[i];
  } 





  return 0;
}