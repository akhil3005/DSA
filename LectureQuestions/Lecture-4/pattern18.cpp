#include<iostream>
using namespace std;
int main(){
    int n;
    char ch = 'A';
    cout<<"Enter the n: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        char k = ch+n-i;
        for(int j=1;j<=i;j++){          
            cout<<k;    
            k++; 
        }
        cout<<endl;
    
    }
}