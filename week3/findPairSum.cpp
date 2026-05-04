#include<iostream>
#include <vector>
using namespace std;

int main(){
    


    vector<int> arr {1,4,5,7,8,6,3,2,10,11};
    int sum =9;
    vector<int> ans;

    for(int i =0; i<arr.size()-1; i++){
        for(int j=i+1; j<arr.size(); j++){
            if(sum==arr[i]+arr[j]){
                ans.push_back(arr[i]);
                ans.push_back(arr[j]);

            }
        }
    }


    for(auto value: ans){
        cout<<value<<" ";
    }

    return 0;
}