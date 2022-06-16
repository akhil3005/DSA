#include<iostream>
using namespace std;
int main(){
    int n,i=1,sum=0;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    while(i<=n){
        if(i%2==0){
            sum=sum+i;
            i=i+1;
        }
        else{
            i=i+1;
        }
    }
    cout<<"Sum: "<<sum;
}
