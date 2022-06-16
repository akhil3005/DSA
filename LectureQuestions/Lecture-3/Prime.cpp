#include<iostream>
using namespace std;
int main(){
    int num,flag=0;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    for(int i=2;i<num/2;i++){
        if(num%i==0){
            cout<<"Not Prime"<<endl;
            flag=flag+1;
            break;
        }
    }
    if(flag==0){
        cout<<"Prime";
    }
}