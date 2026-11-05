#include<iostream>
using namespace std;
int main(){
    cout<<"Radius of Sphere : ";
    float radius;
    cin>>radius;
    float volume = 4*3.141592*radius*radius*radius/3;
    cout<<"Volume of Sphere : " ; 
    cout<<volume<<endl;
}