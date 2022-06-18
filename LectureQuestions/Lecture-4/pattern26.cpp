#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the n: "<<endl;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        int space = n-i;
        while(space){
            cout<<" ";
            space--;
        }
        int count=1;
        for(int j=1;j<=i;j++){          
           cout<<count;
           count++;
        }
        int m=i-1;
        for(int k=1;k<i;k++){
            cout<<m;
            m--;
        }
        cout<<endl;
    }
}