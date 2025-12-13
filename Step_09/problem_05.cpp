#include<bits/stdc++.h>
using namespace std;

int Sum(int n){
    if(n==0) return 1;
    return n+Sum(n-1);
}

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"The Sum is : "<<Sum(n);
    return 0;
}