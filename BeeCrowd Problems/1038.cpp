#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    double price[6]={0.0, 4.00, 4.50, 5.00, 2.00, 1.50};
    cout<<fixed<<setprecision(2)<<"Total: R$ "<<price[x]*y<<endl;
return 0;
}



#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;

    if (x == 1) cout<<fixed<<setprecision(2)<<"Total: R$ "<<4.00*y<<endl;
    else if (x == 2) cout<<fixed<<setprecision(2)<<"Total: R$ "<<4.50*y<<endl;
    else if (x == 3) cout<<fixed<<setprecision(2)<<"Total: R$ "<<5.00*y<<endl;
    else if (x == 4) cout<<fixed<<setprecision(2)<<"Total: R$ "<<2.00*y<<endl;
    else if (x == 5) cout<<fixed<<setprecision(2)<<"Total: R$ "<<1.50*y<<endl;

    return 0;
}
