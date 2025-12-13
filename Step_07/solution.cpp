#include <iostream>
using namespace std;

void p1(){for(int i=0;i<5;i++){for(int j=0;j<5;j++)cout<<"*";cout<<endl;}}
void p2(){for(int i=1;i<=5;i++){for(int j=1;j<=i;j++)cout<<"*";cout<<endl;}}
void p3(){for(int i=5;i>=1;i--){for(int j=1;j<=i;j++)cout<<"*";cout<<endl;}}
void p4(){for(int i=1;i<=5;i++){for(int j=1;j<=i;j++)cout<<j<<" ";cout<<endl;}}
void p5(){for(int i=1;i<=5;i++){for(int j=1;j<=i;j++)cout<<"*";cout<<endl;}for(int i=4;i>=1;i--){for(int j=1;j<=i;j++)cout<<"*";cout<<endl;}}
void p6(){for(int i=1;i<=5;i++){for(int s=1;s<=5-i;s++)cout<<" ";for(int j=1;j<=i;j++)cout<<"*";cout<<endl;}}
void p7(){for(int i=5;i>=1;i--){for(int s=1;s<=5-i;s++)cout<<" ";for(int j=1;j<=i;j++)cout<<"*";cout<<endl;}}
void p8(){for(int i=1;i<=5;i++){for(int s=1;s<=5-i;s++)cout<<" ";for(int j=1;j<=2*i-1;j++)cout<<"*";cout<<endl;}}
void p9(){for(int i=5;i>=1;i--){for(int s=1;s<=5-i;s++)cout<<" ";for(int j=1;j<=2*i-1;j++)cout<<"*";cout<<endl;}}
void p10(){for(int i=1;i<=5;i++){for(int s=1;s<=5-i;s++)cout<<" ";for(int j=1;j<=i;j++)cout<<"* ";cout<<endl;}}
void p11(){for(int i=5;i>=1;i--){for(int s=1;s<=5-i;s++)cout<<" ";for(int j=1;j<=i;j++)cout<<"* ";cout<<endl;}}
void p12(){p11();p10();}
void p13(){for(int i=1;i<=5;i++){for(int s=1;s<=5-i;s++)cout<<" ";for(int j=1;j<=i;j++){if(j==1||j==i||i==5)cout<<"* ";else cout<<"  ";}cout<<endl;}}
void p14(){for(int i=5;i>=1;i--){for(int s=1;s<=5-i;s++)cout<<" ";for(int j=1;j<=i;j++){if(j==1||j==i||i==5)cout<<"* ";else cout<<"  ";}cout<<endl;}}
void p15(){for(int i=1;i<=5;i++){for(int s=1;s<=5-i;s++)cout<<" ";for(int j=1;j<=i;j++){if(j==1||j==i)cout<<"* ";else cout<<"  ";}cout<<endl;}for(int i=4;i>=1;i--){for(int s=1;s<=5-i;s++)cout<<" ";for(int j=1;j<=i;j++){if(j==1||j==i)cout<<"* ";else cout<<"  ";}cout<<endl;}}
void p16(){for(int i=0;i<5;i++){for(int s=1;s<=5-i;s++)cout<<" ";int n=1;for(int j=0;j<=i;j++){cout<<n<<"   ";n=n*(i-j)/(j+1);}cout<<endl;}}
void p17(){for(int i=1;i<=4;i++){for(int s=1;s<=4-i;s++)cout<<" ";for(int j=i;j>=1;j--)cout<<j;for(int j=2;j<=i;j++)cout<<j;cout<<endl;}for(int i=3;i>=1;i--){for(int s=1;s<=4-i;s++)cout<<" ";for(int j=i;j>=1;j--)cout<<j;for(int j=2;j<=i;j++)cout<<j;cout<<endl;}}
void p18(){for(int i=1;i<=5;i++){for(int j=1;j<=10;j++){if(j<=i||j>10-i)cout<<"*";else cout<<" ";}cout<<endl;}for(int i=4;i>=1;i--){for(int j=1;j<=10;j++){if(j<=i||j>10-i)cout<<"*";else cout<<" ";}cout<<endl;}}
void p19(){for(int i=1;i<=5;i++){for(int j=1;j<=10;j++){if(j>=i&&j<=11-i)cout<<"*";else cout<<" ";}cout<<endl;}for(int i=4;i>=1;i--){for(int j=1;j<=10;j++){if(j>=i&&j<=11-i)cout<<"*";else cout<<" ";}cout<<endl;}}
void p20(){for(int i=1;i<=4;i++){for(int j=1;j<=4;j++){if(i==1||i==4||j==1||j==4)cout<<"*";else cout<<" ";}cout<<endl;}}
void p21(){int x=1;for(int i=1;i<=5;i++){for(int j=1;j<=i;j++)cout<<x++<<" ";cout<<endl;}}
void p22(){for(int i=1;i<=5;i++){for(int j=1;j<=i;j++)cout<<(i+j)%2<<" ";cout<<endl;}}
void p23(){for(int i=1;i<=3;i++){for(int s=1;s<=3-i;s++)cout<<" ";cout<<"*";for(int s=1;s<=2*i-2;s++)cout<<" ";if(i>1)cout<<"*";cout<<endl;}}
void p24(){for(int i=1;i<=5;i++){for(int j=1;j<=10;j++){if(j==i||j==11-i)cout<<"*";else cout<<" ";}cout<<endl;}for(int i=4;i>=1;i--){for(int j=1;j<=10;j++){if(j==i||j==11-i)cout<<"*";else cout<<" ";}cout<<endl;}}
void p25(){for(int i=1;i<=5;i++){for(int s=1;s<=5-i;s++)cout<<" ";for(int j=1;j<=5;j++){if(i==1||i==5||j==1||j==5)cout<<"*";else cout<<" ";}cout<<endl;}}
void p26(){for(int i=1;i<=6;i++){for(int j=1;j<=7-i;j++)cout<<i<<" ";cout<<endl;}}
void p27(){int a=1,b=17;for(int i=1;i<=4;i++){for(int s=1;s<=i-1;s++)cout<<"  ";for(int j=1;j<=5-i;j++)cout<<a++<<" ";for(int j=1;j<=5-i;j++)cout<<b++<<" ";cout<<endl;}}
void p28(){for(int i=1;i<=5;i++){for(int s=1;s<=5-i;s++)cout<<" ";for(int j=1;j<=i;j++)cout<<"* ";cout<<endl;}for(int i=4;i>=1;i--){for(int s=1;s<=5-i;s++)cout<<" ";for(int j=1;j<=i;j++)cout<<"* ";cout<<endl;}}
void p29(){p19();}
void p30(){for(int i=1;i<=5;i++){for(int s=1;s<=5-i;s++)cout<<"  ";for(int j=i;j>=1;j--)cout<<j<<" ";for(int j=2;j<=i;j++)cout<<j<<" ";cout<<endl;}}
void p31(){int n=4;for(int i=0;i<7;i++){for(int j=0;j<7;j++){int v=max(abs(i-n),abs(j-n));cout<<v+1<<" ";}cout<<endl;}}
void p32(){for(char c='E';c>='A';c--){for(char x=c;x<='E';x++)cout<<x<<" ";cout<<endl;}}
void p33(){char c='a';for(int i=1;i<=5;i++){for(int j=1;j<=i;j++){if((i+j)%2)cout<<c<<" ";else cout<<(char)(c-32)<<" ";c++;}cout<<endl;}}
void p34(){for(char c='E';c>='A';c--){for(char x=c;x>='A';x--)cout<<x<<" ";cout<<endl;}}
void p35(){for(int i=1;i<=4;i++){for(int j=1;j<=i;j++)cout<<j;for(int s=1;s<=8-2*i;s++)cout<<" ";for(int j=i;j>=1;j--)cout<<j;cout<<endl;}}

int main(){
    p1();p2();p3();p4();p5();p6();p7();p8();p9();p10();
    p11();p12();p13();p14();p15();p16();p17();p18();p19();p20();
    p21();p22();p23();p24();p25();p26();p27();p28();p29();p30();
    p31();p32();p33();p34();p35();
    return 0;
}
