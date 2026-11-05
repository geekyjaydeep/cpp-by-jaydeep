// #include<iostream>
// using namespace std;
// int main(){
//     int l,b;
//     cout<<"Length of the Rectangle :";
//     cin>>l;
//     cout<<"Breadth of the Rectangle :";
//     cin>>b;

//     int A;
//     A=l*b;
//     int P;
//     P=2*(l+b);


//     // int a;
//     // cout<<"Area :";
//     // cout<<l*b<<endl;
//     // int p;
//     // cout<<"Perimeter :";
//     // cout<<2*(l+b)<<endl;

//     if(A>P) cout<<"Yes area is greater than perimeter";
//     else cout<<"No area is not grater than perimeter";
    
// }
#include<iostream>
using namespace std;
int main(){
    float l,b;
    cout<<"Enter the Length :";
    cin>>l;
    cout<<"Enter the breadth :";
    cin>>b;
    float A = l*b;
    float P = 2*(l+b);

    if(A>P) cout<<"Area is greater than perimeter";
    else cout<<"Area is less than perimeter";
}