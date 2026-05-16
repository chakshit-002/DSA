#include<iostream>
using namespace std;

float areaOfCircle(float radius){
    float area = radius*radius*3.14;
    return area;
}
int main(){
    float radius;
    cout<<"enter the  value of radius"<<endl;
    cin>>radius;
    float area = areaOfCircle(radius);

    cout<<"area of circle is "<<area<<endl;


}