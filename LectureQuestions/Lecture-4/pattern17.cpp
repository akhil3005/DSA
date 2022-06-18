#include<iostream>
using namespace std;
int main(){
    int n;
    char ch = 'A';
    cout<<"Enter the n: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            char k = ch + j -1;          
            cout<<k;      
        }
        cout<<endl;
        ch++;
    }
}