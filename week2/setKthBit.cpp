#include <iostream>
#include <vector>
#include<cmath>
using namespace std;


void deciToBin(vector<int> &arr, int n){
    int a = n;
    while(a!=0){
        int  rem = a%2;
        arr.push_back(rem);
        a/=2;
    }
}
int M2BitOper(int n, int k){
    int a = 1<<k;
    int ans = n | a;
    return ans;
}

int main(){



    int n ;
    cout<<"Enter the number for setting kth bit"<<endl;
    cin>>n;
    cout<<endl;
    int k; 
    cout<<"Enter the Kth bit for getting  set "<<endl;
    cin>>k;

    vector<int> arr;
    deciToBin(arr,n);
    
    for(int i =0; i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //setting kth bit
    arr[k] = 1;
   for(int i =0; i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int number =0;
    for(int i =0; i<arr.size(); i++){

        number = arr[i]*pow(2,i) + number;
    }

    cout<<number;

    cout<<endl;
    cout<<"Another bit manipulation way "<< M2BitOper(n,k) <<endl;
    



}