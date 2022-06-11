#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number :"<<endl;
    cin>>num;
    for(int i=1;i<=num;i++){
        if(i%2==0){
            cout<<"";
        }
        else{
            cout<<i<<" ";
        }
    }
    return 0;
}