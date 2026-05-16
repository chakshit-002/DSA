#include<iostream>
using namespace std;

int main(){

    int n; 
    cout<<"Enter the value of n "<<endl;

    cin>>n;

    for(int i =0; i<2*n;  i++){
        if(i<n){
            for(int j =0; j<i+1; j++){
                cout<<"*";
            }
            for(int k=0; k<2*n-2*(i+1);k++){
                cout<<" ";
            }
            for(int l =0; l<i+1; l++){
                cout<<"*";
            }
        }
        else{
            for(int p =0; p<2*n-i; p++){
                cout<<"*";
            }
            for(int q = 0; q<2*(i-n); q++){
                cout<<" ";
            }
            for(int r=0; r<2*n-i; r++){
                cout<<"*";
            }
        }
        cout<<endl;
    }

    for(int i =0; i<2*n; i++){
        int cond = i<n?i:n+(n-i-1);
        int space_count = i<n? 2*(n-cond-1): i-cond-1;

        for(int j =0; j<2*n; j++){
            if(j<=cond){
                cout<<"*";
            }
            else if(space_count>0){
                cout<<" ";
                space_count--;
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }

}