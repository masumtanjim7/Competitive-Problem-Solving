#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A,B,C,D;
    double X,Y,T=0;
    cin>>A>>B>>X;
    cin>>C>>D>>Y;
    T=(B*X+D*Y);
    cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<T<<endl;
    return 0;
}
