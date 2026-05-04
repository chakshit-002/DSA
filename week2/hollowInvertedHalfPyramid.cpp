#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the vlue of n"<<endl;
    cin>>n;

    for(int i =0; i<n; i++){

        for(int j = 0 ; j<2*n-2*i-1; j++){

            if(i==0){
                if(j%2==0){
                    cout<<(j/2)+1;
                }
                else{
                    cout<<" ";
                }
            }
            else if(j==0){
                cout<<i+1;
            }
            else if(j==2*n-2*i-2){
                cout<<n;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}