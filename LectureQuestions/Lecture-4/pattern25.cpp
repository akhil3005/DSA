#include<iostream>
using namespace std;
int main(){
    int n,count=1;
    cout<<"Enter the n: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        int space = n-i;
        while(space){
            cout<<" ";
            space--;
        }
        for(int j=1;j<=i;j++){          
           cout<<count;
           count++;
        }
        cout<<endl;
    }
}