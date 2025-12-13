#include<bits/stdc++.h>
using namespace std;

int main(){
    float temp;
    cout<<"Enter temperature : ";
    cin>>temp;
    if(temp<20){
        cout<<"Cold";
    }
    else if(temp>20 && temp<=29){
        cout<<"Warm";
    }
    else if(temp>=30 && temp<=39){
        cout<<"Hot";
    }
    else{
        cout<<"Very hot";
    }
    return 0;
}