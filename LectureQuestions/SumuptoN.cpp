#include<iostream>
using namespace std;
int main(){
    int num,sum=0;
    cout<<"Enter the number :"<<endl;
    cin>>num;
    for(int i=0;i<=num;i++){
        sum=sum+i;
    }
    cout<<sum<<endl;
    return 0;
}