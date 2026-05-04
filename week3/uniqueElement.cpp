#include<iostream>
#include <vector>
using namespace std;

int main(){
    
 

    //by xor technique
    vector<int> arr {4,3,2,1,1,6,7,8,9,7,8,3,4,5,2,5,9};
    
    int elem =0;
    for(int i =0; i<arr.size(); i++){
        elem = elem^arr[i];
    }

    cout<<"unique element is "<<elem<<endl;
    //demerit yh hai ki odd no. of element mei filter nahi kr paega even  no. of elments mei hi kr skta hai


    
    return 0;
}