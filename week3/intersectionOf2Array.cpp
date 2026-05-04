#include<iostream>
#include <vector>
using namespace std;

int main(){
    
 
   vector<int> arr {2,8,9,10,7};
    vector<int> brr {4,8,5,7,6,1};

    vector <int>ans;

    for(int i =0; i<arr.size(); i++){
        for(int  j =0; j<brr.size(); j++){
            if(arr[i]==brr[j]){
                ans.push_back(arr[i]);
                brr[j]=INT_MIN;
            }
        }
    }

    for(auto value: ans){
        cout<<value<<" "<<endl; 
    }
    return 0;
}