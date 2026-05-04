#include <iostream>

using namespace std;

int main(){
    int n ;
    cout<<"Enter the value of n "<<endl;
    cin>>n;

    for(int i =0; i<n; i++){

        for(int j = 0 ; j<n-i-1; j++){
            cout<< " ";
        }
        for(int k = 0 ; k<i+1; k++){
            cout<<k+1;
        }
        for(int l=i; l>0;l--){
            cout<<l;
        }
        cout<<endl;
    }


    for(int i =0; i<n; i++){
        for(int j =0; j<n-i-1; j++){
            cout<<" ";
        }
        int a =1;
        for(int k =0; k<2*i+1; k++){
            if(k<=i){
                if(k==i){
                    cout<<a;
                    a--;
                }
                else{
                    cout<<a;
                    a++;
                }
            }
            else{
                cout<<a;
                a--;
            }
        }
        cout<<endl;
    }
    return 0;
}