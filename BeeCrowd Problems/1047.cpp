#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A,B,C,D, X1=0,X2=0,Z=0;
    cin>>A>>B>>C>>D;
    X1=A*60+B;
    X2=C*60+D;

    if(A<=C)
    {
        Z=X2-X1;
        if(Z==0)
            cout<<"O JOGO DUROU "<< 24 <<" HORA(S) E "<< Z%60 <<" MINUTO(S)"<<endl;
        else
            cout<<"O JOGO DUROU "<< (Z-Z%60)/60 <<" HORA(S) E "<< Z%60 <<" MINUTO(S)"<<endl;
    }
    else
    {
        Z=(24*60-X1)+X2;
        cout<<"O JOGO DUROU "<< (Z-Z%60)/60 <<" HORA(S) E "<< Z%60 <<" MINUTO(S)"<<endl;
    }
return 0;
}
