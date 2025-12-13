#include<bits/stdc++.h>
using namespace std;

int main(){
    char n;
    cout<<"Enter a character :";
    cin>>n;
    if(n=='a' || n=='e' || n=='i' || n=='o' || n=='u'){
        cout<<"Vowel";
    }
    else{
        cout<<"Consonant";
    }
    return 0;
}