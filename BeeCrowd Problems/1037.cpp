#include <bits/stdc++.h>
using namespace std;

int main()
{
    double A;
    cin>>A;

    if (A<0.0 || A>100.0)
        {
        cout << "Fora de intervalo\n";
        }
    else
        {
        if (A<=25.0) cout<<"Intervalo [0,25]\n"<<endl;
        else if (A<=50.0) cout<<"Intervalo (25,50]\n"<<endl;
        else if (A<=75.0) cout<<"Intervalo (50,75]\n"<<endl;
        else if (A<=100.0) cout<<"Intervalo (75,100]\n"<<endl;
        }
return 0;
}








#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a;
    cin >> a;

    if (a < 0.0 || a > 100.0){
        cout << "Fora de intervalo\n";
    }else{
        if (a <=25.0) cout << "Intervalo [0,25]\n";
        else if (a <=50.0) cout << "Intervalo (25,50]\n";
        else if (a <=75.0) cout << "Intervalo (50,75]\n";
        else if (a <=100.0) cout << "Intervalo (75,100]\n";
    }

    return 0;
}
