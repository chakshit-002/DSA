/*
1
2*2
3*3*3
4*4*4*4
4*4*4*4
3*3*3
2*2
1
 */

#include <iostream>
using namespace std;

int main(){
    int n; 
    cout<<"Enter value of n"<<endl; 
    cin>>n;

    for(int i =0; i<n;i++){
        for(int j =0; j<2*i+1; j++){
            if(j%2==0){
                cout<<i+1;
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }

    for(int i = n; i>0; i--){
        for(int j = 0 ; j<2*i-1; j++){
            if(j%2==0){
                cout<<i;
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }

    return 0;
}