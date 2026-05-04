#include<iostream>
#include <vector>
using namespace std;

int main(){
    //union of array
    vector <int> arr1 {4,5,1,8};
    vector<int>brr1 {6,0,10,4,2};

    vector<int>ans1;

    for(int i =0; i<arr1.size();i++){
        ans1.push_back(arr1[i]);
    }
    for(int i =0; i<brr1.size();i++){
        ans1.push_back(brr1[i]);
    }

    for(int i =0; i<ans1.size();i++){
       cout<<ans1[i]<<" ";
    }
    
    cout<<endl;
    //unique +union 

       vector<int> arr {2,8,9,10,7};
    vector<int> brr {4,4,8,8,5,6,1};

    vector <int>ans;

    for(int i =0; i<arr.size(); i++){
        for(int  j =0; j<brr.size(); j++){
            if(arr[i]==brr[j]){
                brr[j]=INT_MIN;
            }
        }
    }

     for(int i =0; i<arr.size()-1; i++){
        for(int  j =i+1; j<arr.size(); j++){
            if(arr[i]==arr[j]){
                arr[j]=INT_MIN;
            }
        }
    }

    
     for(int i =0; i<brr.size()-1; i++){
        for(int  j =i+1; j<brr.size(); j++){
            if(brr[i]==brr[j]){
                brr[j]=INT_MIN;
            }
        }
    }


    
     for(int i =0; i<arr.size(); i++){
        if(arr[i]!=INT_MIN){

            ans.push_back(arr[i]);
        }
    }

    for(int j =0; j<brr.size();  j++){
        if(brr[j]!=INT_MIN){

            ans.push_back(brr[j]);
        }
    }

    for(int k=0;  k<ans.size(); k++){
        cout<<ans[k]<<" "<<endl;
    }
    return 0;
}