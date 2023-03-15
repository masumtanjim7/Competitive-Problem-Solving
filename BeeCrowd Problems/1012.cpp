#include<bits/stdc++.h>
using namespace std;
int main ()
{
    double X,Y,Z;
    cin>>X>>Y>>Z;
    double P=3.14159,A,B,C,D,E;
    A=0.5*X*Z;
    B=P*(Z*Z);
    C=(X+Y)/2*Z;
    D=Y*Y;
    E=X*Y;

    cout<<"TRIANGULO: "<<fixed<<setprecision(3)<<A<<endl;
    cout<<"CIRCULO: "<<fixed<<setprecision(3)<<B<<endl;
    cout<<"TRAPEZIO: "<<fixed<<setprecision(3)<<C<<endl;
    cout<<"QUADRADO: "<<fixed<<setprecision(3)<<D<<endl;
    cout<<"RETANGULO: "<<fixed<<setprecision(3)<<E<<endl;
    return 0;
}
