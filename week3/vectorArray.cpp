#include <iostream>
#include<vector>
using namespace std;

int main() {      
  cout << "Hello world!" << endl;   
  
  vector<int>arr;

  cout<<"capacity of arr "<<arr.capacity()<<endl;
  cout<<"size of arr "<<arr.size()<<endl;

  arr.push_back(1);
  arr.push_back(10);
  arr.push_back(20);
 cout<<"capacity of arr "<<arr.capacity()<<endl;
  cout<<"size of arr "<<arr.size()<<endl;

  arr.push_back(50);
 cout<<"capacity of arr "<<arr.capacity()<<endl;
  cout<<"size of arr "<<arr.size()<<endl;

  arr.push_back(50);
   cout<<"capacity of arr "<<arr.capacity()<<endl;
  cout<<"size of arr "<<arr.size()<<endl;

  arr.push_back(60);
   cout<<"capacity of arr "<<arr.capacity()<<endl;
  cout<<"size of arr "<<arr.size()<<endl;


  vector<int>brr(4);
    brr.push_back(1);
  brr.push_back(10);
  brr.push_back(20);
  for(int i =0; i<brr.size(); i++){
    cout<<brr[i]<<"  ";
  }
  cout<<endl;
 cout<<"capacity of brr "<<brr.capacity()<<endl;
  cout<<"size of brr "<<brr.size()<<endl;


 vector<int>crr(4);
  
  for(int i =0; i<crr.size(); i++){
    cout<<crr[i]<<"  ";
  }
  cout<<endl;
 cout<<"capacity of crr "<<crr.capacity()<<endl;
  cout<<"size of crr "<<crr.size()<<endl;

crr[0]=1;


  for(int i =0; i<crr.size(); i++){
    cout<<crr[i]<<"  ";
  }
  cout<<endl;
 cout<<"capacity of crr "<<crr.capacity()<<endl;
  cout<<"size of crr "<<crr.size()<<endl;


vector <int>  drr {1,5,10,5};
for(int i =0; i<drr.size(); i++){
    cout<<drr[i]<<"  ";
  }
  cout<<endl;
 cout<<"capacity of drr "<<drr.capacity()<<endl;
  cout<<"size of drr "<<drr.size()<<endl;

  drr.push_back(4);
  cout<<"capacity of drr "<<drr.capacity()<<endl;
  cout<<"size of drr "<<drr.size()<<endl;


int n ;
  // bad  way 
  // vector<int>  err(n);
  // cin>>n; 
  //good way 
  cin>>n; 
  vector<int>  err(n);
  cout<<"capacity of err "<< err.capacity()<<endl;
  cout<<"size of err "<<err.size()<< endl;
  for(int i =0; i<err.size(); i++){
    cin>>err[i];
  }

  for(int i=0; i<err.size(); i++){
    cout<<err[i]<<" ";
  }
  cout<<endl;
  
  vector <int>frr(n,2);
  for(int i =0; i<frr.size(); i++){
    cout<<frr[i]<<" ";
  }
  cout<<endl;
  return 0;


}

