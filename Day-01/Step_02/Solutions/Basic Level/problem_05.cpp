#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter your marks : ";
    cin>>n;
    if(n>75){
        cout<<"A";
    }
    else if(n>50){
        cout<<"B";
    }
    else{
        cout<<"Fail";
    }
    return 0;
}