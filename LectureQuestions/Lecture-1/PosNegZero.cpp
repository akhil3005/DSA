#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number :"<<endl;
    cin>>num;
    if(num>=0){
        if(num==0){
            cout<<"Zero"<<endl;
        }
        else{
            cout<<"Positive"<<endl;
        }
    }
    else{
        cout<<"Negative"<<endl;
    }
    return 0;
}