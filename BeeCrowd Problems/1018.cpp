#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N=(0 < N < 1000000);
    cin>>N;
    cout<<N<<endl;
    if(N>=100)
    {
        cout<<N/100<<" nota(s) de R$ 100,00"<<endl;
        N-=((N/100)*100);
    }
    else cout<<"0 nota(s) de R$ 100,00"<<endl;


    if(N>=50)
    {
        cout<<N/50<<" nota(s) de R$ 50,00"<<endl;
        N-=((N/50)*50);
    }
    else cout<<"0 nota(s) de R$ 50,00"<<endl;


    if(N>=20)
    {
        cout<<N/20<<" nota(s) de R$ 20,00"<<endl;
        N-=((N/20)*20);
    }
    else cout<<"0 nota(s) de R$ 20,00"<<endl;


    if(N>=10)
    {
        cout<<N/10<<" nota(s) de R$ 10,00"<<endl;
        N-=((N/10)*10);
    }
    else cout<<"0 nota(s) de R$ 10,00"<<endl;


    if(N>=5)
    {
        cout<<N/5<<" nota(s) de R$ 5,00"<<endl;
        N-=((N/5)*5);
    }
    else cout<<"0 nota(s) de R$ 5,00"<<endl;


    if(N>=2)
    {
        cout<<N/2<<" nota(s) de R$ 2,00"<<endl;
        N-=((N/2)*2);
    }
    else cout<<"0 nota(s) de R$ 2,00"<<endl;


    if(N>=1)
    {
        cout<<N/1<<" nota(s) de R$ 1,00"<<endl;
        N-=((N/1)*1);
    }
    else cout<<"0 nota(s) de R$ 1,00"<<endl;

    return 0;
}

