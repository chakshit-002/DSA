#include <iostream>
using namespace std;


int sqrtBinarySearch(int n){
  int target = n;
  int s= 0, e = n, m = s+(e-s)/2;
  int ans = -1;
  while(s<=e){
    if(m*m==target){
      ans = m ;
      return ans;
    }
    else if(m*m > target){
      e=m-1;
    }
    else{
      ans = m;
      s=m+1;
    }
    m = s+(e-s)/2;
  }

  return ans;
}

double morePrecise(int n, int precision){
    double step = 0.1;
    double ans = sqrtBinarySearch(n);

    for(int i = 0; i<precision; i++){
    
      for(double j = ans; j*j<=n; j= j+step){
        ans = j;
      }
      step = step/10;
      
    }

  return ans;

}
int main() {
  cout << "Hello world!" << endl;

  int n ; 
  cout<<"Enter the value of n"<<endl;
  cin>>n;

  cout<<"sqrt of n is "<<sqrtBinarySearch(n)<<endl;

  int precision;
  cout<<"At what step you want precise answer of sqrt root"<<endl;
  cin>>precision;

cout<<"Answer precise "<<morePrecise(n,precision)<<endl;
//preicsion vala jyda preicse pr nahi chl rha hai find out reason 
  return 0;
}