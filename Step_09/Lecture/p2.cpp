#include<bits/stdc++.h>
using namespace std;

//print Linearly from 1 to N

void print(int i,int n){
    if(i>n){
        return;
    }
    cout<<i<<"   ";
    print(i+1,n);
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    print(0,n);
    return 0;
}