#include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"Enter the cost price :";
    cin>>cp;
    int sp;
    cout<<"Enter the selling price :";
    cin>>sp;

    if(cp>sp) cout<<"Loss is "<<cp-sp;
    else if(cp<sp) cout<<"Profit is "<<sp-cp; //else-if wala ladder 
    else cout<<"No Profit No loss";

    // if(cp>sp) cout<<"Loss"<<endl;
    // if(cp<sp) cout<<"Profit"<<endl;
    // if(cp == sp)cout<<"No Profit No loss"<<endl;

//     if(cp>sp) cout<<cp-sp;
//     else cout<<sp-cp;
 }