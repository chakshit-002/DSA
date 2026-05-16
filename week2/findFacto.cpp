#include<iostream>
using namespace std;

long long int fact(long long int n){
    long  long int factVal = 1;
    for(int i =0; i<n;  i++){
        factVal = factVal*(i+1);
    }
    return factVal;
}
int main(){
   long long int num;
    cout<<"enter the  value of num"<<endl;
    cin>>num;
    long long int factoVal = fact(num);

    cout<<"value of factorial"<<" "<<num<<"  is "<<factoVal<<endl;


}