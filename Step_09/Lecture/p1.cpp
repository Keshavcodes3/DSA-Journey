#include<bits/stdc++.h>
using namespace std;

//Print your name n times!!
void f(int i,int n){
    if(i>n){
        return;
    }
    cout<<"Keshav"<<endl;
    f(i+1,n);
}

int main(){
    int  n;
    cout<<"Enter : ";
    cin>>n;
    f(1,n);
}