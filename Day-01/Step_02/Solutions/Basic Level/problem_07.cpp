#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if(n%5==0){
        cout<<"Divisible by 5";
    }
    else if(n%11==0){
        cout<<"Divisible by 11";
    }
    return 0;
}