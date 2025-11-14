#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=n-i;j>0;j--){
            cout<<" ";
        }
        for(int k=1;k<2*i;k++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}