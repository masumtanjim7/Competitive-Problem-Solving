#include<bits/stdc++.h>
using namespace std;
int main()
{
    char M [100];
    cin>>M;
    double A,B,T=0;
    cin>>A>>B;
    T=A+(B*15)/100;
    cout <<"TOTAL = R$ "<<fixed<<setprecision(2)<<T<<endl;
    return 0;
}
