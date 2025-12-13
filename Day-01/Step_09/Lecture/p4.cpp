#include<bits/stdc++.h>
using namespace std;

//Summation of first n given number

int Sum(int n){
    if(n==1){
        return 1;
    }
    return n+Sum(n-1);
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<Sum(n);
}