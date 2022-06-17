#include<iostream>
using namespace std;
int main(){
    int row,col,k=1;
    cout<<"Enter the number of rows: "<<endl;
    cin>>row;
    cout<<"Enter the number of col: "<<endl;
    cin>>col;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            cout<<k<<" ";
            k=k+1;
        }
        cout<<endl;
    }   
}