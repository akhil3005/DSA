#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the value of n :"<<endl;
    cin>>num;
    for(int i=1;i<=num;i++){
        if(i%2==0){
            cout<<i<<" ";
        }   
    }
    return 0;
}