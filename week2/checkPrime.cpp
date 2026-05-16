#include<iostream>
using namespace std;

bool checkPrime(int n){
    int checkVal = 2;
    for(int i =2; i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

void printAllPrime(int n){
    for(int i =2 ; i<=n; i++){
        if(checkPrime(i)){
            cout<< i <<" ";
        }
    }
}
int main(){
    int num;
    cout<<"enter the  value of number"<<endl;
    cin>>num;
    bool val =  checkPrime(num);

    if(val){
        cout<<"Number is prime "<<num<<endl;
    }
    else{
        cout<<"Number is not prime "<<num<<endl;
    }

    cout<<" print Prime no. from 1 to N "<<endl; 
    printAllPrime(num);
    // 1 is not prime no. 

    

}