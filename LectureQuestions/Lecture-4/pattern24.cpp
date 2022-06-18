#include<iostream>
using namespace std;
int main(){
    int n,k=1;
    cout<<"Enter the n: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        int space = i-1;
        while(space){
            cout<<" ";
            space--;
        }
        int l=k;
        for(int j=1;j<=(n-i+1);j++){          
           cout<<l;
           l++;
        }
        cout<<endl;
        k++;
    }
}