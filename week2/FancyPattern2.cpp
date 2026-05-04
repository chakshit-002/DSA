// #include<iostream>
// using namespace  std;

// int main(){
//     int n;
//     cout<<"Enter the  value of n"<<endl;
//     cin>>n;

//     int a = 1;

//     for(int i =0;  i<n;i++){
//         for(int j =0;  j<2*i+1; j++){
//             if(j%2==0){
//                 cout<<a;
//                 a++;
//             }
//             else{
//                 cout<<"*";
//             }
//         }
//         cout<<endl;
//     }

    
//     a = a-n;
//    for(int i =0;  i<n;i++){
//         int start = a;
//         for(int j =0;  j<2*n-2*i-1; j++){
//             if(j%2==0){
//                 cout<<start;
//                 start++;
//             }
//             else{
//                 cout<<"*";
//             }
//         }
//         cout<<endl;
//         a=a-(n-i-1);
//     }
    
// }


#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a = 1;

    for(int i = 0; i < n; i++){
        int temp = a;

        for(int j = 0; j < 2*i+1; j++){
            if(j%2==0){
                cout << temp;
                temp++;
            } else {
                cout << "*";
            }
        }
        cout << endl;

        a += (i+1);
    }

    a -= n;
    
    for(int i = n-1; i >= 0; i--){
        int temp = a;

        for(int j = 0; j < 2*i+1; j++){
            if(j%2==0){
                cout << temp;
                temp++;
            } else {
                cout << "*";
            }
        }
        cout << endl;

        a -= i;
    }

    return 0;
}