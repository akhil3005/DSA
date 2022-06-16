#include<iostream>
using namespace std;
int main(){
    float p,r,t;
    cout<<"Enter the value of P,R,T :"<<endl;
    cin>>p>>r>>t;
    float si = (p*r*t)/100;
    cout<<"Simple Interest :"<<si<<endl;

    return 0;
}