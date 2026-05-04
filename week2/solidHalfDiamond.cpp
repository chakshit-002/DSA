#include<iostream>
using namespace std;

int main(){
    int n ; 
    cout<<"Enter the value of n "<<endl;
    cin>>n;

    for(int i =0;  i<n; i++){
        for(int j =0; j<i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = n-1; i>0; i--){
        for(int j = 0; j<i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    //aur tarika
    for(int i =0; i<2*n-1;  i++){
        
        int star = i<n ? i : n -(i%n)-2;
        for(int j=0; j<=star; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}