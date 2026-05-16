#include<iostream>
using namespace std;

int revIntFun(int n){
    int numCount = 0, Rem = 0;
    while(n!=0){
        Rem = n%10 ;
        numCount = numCount*10 + Rem ;
        n/=10;
    }

    return numCount;
}
int main(){
    int n;  
    cout<<"Enter the number for reversing "<<endl;
    cin>>n;

    cout<<"The reversed value of "<<n<<" is "<<revIntFun(n)<<endl;
}
