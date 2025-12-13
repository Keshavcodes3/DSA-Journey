#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the hour : ";
    cin>>n;
    if(n<=12){
        cout<<"Good Morning";
    }
    else if(n<=19){
        cout<<"Good Evening";
    }
    else{
        cout<<"Good Night";
    }
    return 0;
}