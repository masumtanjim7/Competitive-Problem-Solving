#include <bits/stdc++.h>
using namespace std;

int main()
{
    double A,B,C;
    cin>>A>>B>>C;

    double X=B*B-4*A*C;

    if (X<0 || A==0)
        {
        cout<<"Impossivel calcular"<<endl;
        }
    else
    {
        double R1 = (-B+sqrt(X))/(2*A);
        double R2 = (-B-sqrt(X))/(2*A);

        cout<<fixed<<setprecision(5)<< "R1 = "<<R1<<endl;
        cout<<fixed<<setprecision(5)<< "R2 = "<<R2<<endl;
    }
return 0;
}
