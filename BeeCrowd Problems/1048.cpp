#include<bits/stdc++.h>
using namespace std;

int main()
{
    double A,B, X,Y,Z;
    cin>>A;
    if(A>=0 && A<=400.00)
       {
        B=0.15;
       }
    else if(A>=400.01 && A<=800.00)
       {
        B=0.12;
       }
    else if(A>=800.01 && A<=1200.00)
       {
        B=0.1;
       }
    else if(A>=1200.01 && A<=2000.00)
       {
        B=0.07;
       }
    else
     {
      B=0.04;
     }
X=A*B;
Y=A+X;
Z=B*100;
    cout << "Novo salario: " << fixed << setprecision(2) << Y << endl;
    cout << "Reajuste ganho: " << fixed << setprecision(2) << X << endl;
    cout << "Em percentual: " << fixed << setprecision(0) << Z << " %" << endl;
return 0;

}
