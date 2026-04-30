/*

A
A B A
A B C B A 
A B C D C B A 

*/

#include <iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter value of n "<<endl;
    cin>>n;
    char  sum;

    for(int i =0; i<n; i++){
        sum =65;
        for(int j = 0 ; j< 2*i+1;j++){
            if(i==j){
                cout<<sum;
                sum--;
            }
            else if(j<i){
               cout<<sum;
               sum++;

           }
           else{
               cout<<sum;
               sum--;
           }
        }
        cout<<endl;
    }

    //or 

    for(int i=0; i<n; i++){
        
        for(int j = 0 ; j<i+1; j++){
            int  ans = j;
            char ch = ans +'A';
            cout<<ch;
        }
        
        for(int k = i ; k>=1; k--){
            int ans = k;
            char ch = ans + 'A' -1;
            cout<<ch;
        }
        cout<<endl;
    }
    return 0 ; 
    
}