#include<iostream>
using namespace std;

bool checkEvenOdd(int num){

    return num % 2 ==0 ? true : false;
}
bool  checkEvenOddM2(int num){
    if((num&1)==0){
        return true;
    }   
    
        return false;
   
}
int main(){
    int num;
    cout<<"enter the  value of number"<<endl;
    cin>>num;
    bool val =  checkEvenOdd(num);

    if(val){
        cout<<"Number is even "<<num<<endl;
    }
    else{
        cout<<"Number is odd "<<num<<endl;
    }
bool val2 =  checkEvenOddM2(num);
     if(val2){
        cout<<"Number is even "<<num<<endl;
    }
    else{
        cout<<"Number is odd "<<num<<endl;
    }


}