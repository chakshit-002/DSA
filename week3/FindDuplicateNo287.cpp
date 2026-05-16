#include<iostream>
#include<vector>
#include<algorithm>
// #include<cmath>
using namespace std;

void duplicateM1(vector<int> v){
    sort(v.begin(),v.end());

    for(int i =0; i<v.size(); i++){
        if(v[i]==v[i+1]){
            cout<<"By sorting the array and then finding duplicate no. is "<<v[i]<<endl;
            break;
        }
    }

}

void duplicateM2(vector<int>v){
    for(int i=0; i<v.size();i++){
        int index = abs(v[i]);
        if(v[index]<0){
            cout<<"By Negative flagging throught position uses as index then finding  duplicate no. is "<<index<<endl;
            break;
        }

        v[index]= (-1)*v[index];
    }
}
void duplicateM3(vector<int>v){
    while(v[0]!= v[v[0]]){
        swap(v[0],v[v[0]]);
    }
    cout<<"swapping method from zeroth index "<<v[0]<<endl;
}
int main(){
    
    vector<int> v{1,6,5,4,2,2,3};
    duplicateM1(v);
    duplicateM2(v);
    duplicateM3(v);
    
}