#include <bits/stdc++.h>
using namespace std;

int main()
{
    double S;

    cin>>S;

    if(S <= 2000.00)
        {
         cout << "Isento" <<endl;
        }
    else if (S >= 2000.01 && S <= 3000.00)
        {
        cout<<fixed<<setprecision(2)<<"R$ "<<(S - 2000.00)*0.08<<endl;
        }
    else if (S >= 3000.01 && S <= 4500.00)
        {
        cout<<fixed<<setprecision(2)<<"R$ "<<((S - 3000.00)*0.18 + 1000.00*0.08)<<endl;
        }
    else if (S >= 4500.01)
        {
        cout<<fixed<<setprecision(2)<<"R$ "<<((S - 4500.00)*0.28 + 1500.00*0.18 + 1000.00*0.08)<<endl;
        }
    return 0;
}
