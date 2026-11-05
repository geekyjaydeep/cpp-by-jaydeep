#include<iostream>
using namespace std;
int main(){
    float x;
    cout<<"Enter the Real No. :";
    cin>>x;
    int y = (int)x;

    if(x == y) cout<<"It is an integer";
    else cout<<"It is not an integer";
}