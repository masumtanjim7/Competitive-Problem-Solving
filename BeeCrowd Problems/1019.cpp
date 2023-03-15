#include<bits/stdc++.h>
using namespace std;

int main()
{
    int H=0,M=0,S=0;
    cin>>S;

    if (S>=3600)
    {
        H=(S/3600);
        S-=(H*3600);
    }


    if (S>=60)
    {
        M=(S/60);
        S-=(M*60);
    }


    cout<<H<<":"<<M<<":"<<S<<endl;
}
