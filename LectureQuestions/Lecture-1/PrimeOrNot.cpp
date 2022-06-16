#include<iostream>
using namespace std;
int main(){
    int num,flag=0;
    cout<<"Enter the number :"<<endl;
    cin>>num;
    for(int n=2;n<num;n++){
        if(num%n==0){
            cout<<"Not prime"<<endl;
            flag=flag+1;
            break;
        }
       
    }
    if(flag==0){
        cout<<"Prime"<<endl;
    }
    return 0;
}