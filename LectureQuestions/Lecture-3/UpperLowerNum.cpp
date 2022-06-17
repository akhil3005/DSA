#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if(ch>=65 && ch<=90){
        cout<<"UpperCase";
    }
    else if(ch>=48 && ch<=57){
        cout<<"Numeric";
    }
    else if(ch>=97 && ch<=122){
        cout<<"LowerCase";
    }
    else{
        cout<<"Special character";
    }            
}