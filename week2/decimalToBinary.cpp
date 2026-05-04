#include <iostream>
#include <cmath>
// cmath isliye use kiya pow function ke liye 
using namespace std;

int main(){
    int n;
    cout<<"Enter the  value of no. n"<<endl;
    cin>>n;
    int a = n;
    int bit =0;
    // printing the binary's of decimal no.
    while(n>0){
        bit = n%2;
        cout<<bit<<endl;
        n=n/2;
    }

    bit=0;
    n=a;
    //printing binary no.  of  decimal  no.
    int i =0;
    int binNum = 0;
    while(n>0){
        bit = n%2;
        binNum  = bit*pow(10,i) + binNum;
        i++;
        n/=2;
    }

    cout<<binNum<<endl;

    n = a;
    i=0;
    binNum=0;
    int multiplier = 1;
    //without cmath
    while(n>0){
        bit = n%2;
        binNum = bit*multiplier + binNum;
        multiplier*=10;
        n/=2;
    }
    cout<<binNum<<endl;

    //with bits 
    n = a;
    bit = 0;
    binNum=0;
    while(n>0){
       bit = n&1;
       binNum = bit*pow(10,i) + binNum;
       i++;
        n = n>>1;
    }
    cout<<binNum<<endl;
    return 0;
}