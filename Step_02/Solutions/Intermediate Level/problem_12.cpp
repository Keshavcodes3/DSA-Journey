#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1,n2,n3;
    cout<<"Enter three angles : ";
    cin>>n1>>n2>>n3;
    if((n1>0 && n2>0 && n3>0)&&(n1+n2+n3==180)){
        cout<<"They form a triangle";
    }
    else{
        cout<<"They don't form a triangle";
    }
    return 0;
}