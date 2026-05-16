#include<iostream>
#include<vector>
#include<algorithm>
// #include<cmath>
using namespace std;

void missingEWDFlagM(vector<int> v){
  
 for(int i =0; i<v.size(); i++){
    int index = abs(v[i])-1;
    if(v[index]>0){
    // v[i] = v[i]*(-1);
      v[index] = v[index]*(-1);
    }
   
 }

 for(int i=0; i<v.size();i++){
  if(v[i]>0){
    cout<<"By negative Flag method in the array and then finding missing no. is "<<i+1<<endl;

  }
 }
  cout<<"Time complexity O(n)"<<endl;
}

void missingEWDSortSwapM(vector<int> v){

  int i=0;
  while(i<v.size()){
    int index = v[i] -1;
    if(v[i]!=v[index]){
      swap(v[i],v[index]);
    }
    else{
      i++;
    }
  }

  for(int j =0; j<v.size(); j++){
    cout<<v[j]<< " ";
  }
  cout<<endl;
  for(int j =0 ; j<v.size(); j++){
    if(j+1!=v[j]){
       cout<<"By  swapping  and then finding missing no. is "<<j+1<<endl;
    }
  }

  
}
int main(){
    
    // vector<int> v{1,6,5,4,2,2,3};
      // vector<int> v{1,4,2,2,3};
    // vector<int> v{1,2,2,2,2};
    vector<int> v{5,2,6,1,1,1};
    // missingEWD(v);
    missingEWDSortSwapM(v);
   
    
}