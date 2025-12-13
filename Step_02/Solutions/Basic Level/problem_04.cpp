#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if(n==0){
        cout<<"Zero";
    }
    else if(n>0){
        cout<<"Positive";
    }
    else{
        cout<<"Negative";
    }
    return 0;
}