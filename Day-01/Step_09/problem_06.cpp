#include<bits/stdc++.h>
using namespace std;

int Fact(int n){
    if(n==1) return 1;
    return n*Fact(n-1);
}

int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    cout<<Fact(n);
    return 0;
}