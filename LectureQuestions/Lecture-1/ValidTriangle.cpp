#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three sides :"<<endl;
    cin>>a>>b>>c;
    if( (a+b>c) || (b+c>a) || (a+c>b) ){
        cout<<"Valid triangle"<<endl;
    }
    else{
        cout<<"Not Valid"<<endl;
    }
    return 0;
}