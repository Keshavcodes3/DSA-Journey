#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if(n<=9){
        cout<<"Single Digit";
    }
    else if(n<=99){
        cout<<"Two-Digit";
    }
    else if(n<=999){
        cout<<"Three digit";
    }
    else{
        cout<<"out of classification for this";
    }
    return 0;
}