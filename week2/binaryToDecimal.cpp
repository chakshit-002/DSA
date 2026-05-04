#include <iostream>
#include<cmath>
using namespace std;

int main(){

    int n;
    cout<<"Enter the Binary num "<<endl;
    cin>>n;

    int  base = 2;
    int i = 0;
    int bit = 0;
    int deciNum = 0;
    while(n>0){
        // bit =  n & 1;  ya phir 
        bit = n%10;
        deciNum = bit*pow(2,i)+deciNum;
        i++;
        n = n/10;
    }
    cout<<deciNum<<endl;
}