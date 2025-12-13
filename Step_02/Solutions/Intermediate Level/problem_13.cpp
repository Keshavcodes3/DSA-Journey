#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter the sides of triangle : ";
    cin>>a>>b>>c;
    string triangle="";
    if(a+b<=c){
        cout<<"Not a triangle";
        return 0;
    }
    if((a==b && b==c)){
        triangle="Equilateral";
    }
    else if(a==b || b==c){
        triangle="Isosceles";
    }
    else{
        triangle="Scalene";
    }
    cout<<triangle<<" Triangle";
    return 0;
}