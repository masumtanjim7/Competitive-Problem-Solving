#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A,B, time=0;
    cin>>A>>B;
    if (A<B)
    {
      time=B-A;
      cout<<"O JOGO DUROU "<<time<<" HORA(S)"<<endl;
    }
    else if (A>B)
    {
        time=24-(A-B);
        cout<<"O JOGO DUROU "<<time<<" HORA(S)"<<endl;
    }
    else if (A==B)
    {
        time=24;
        cout<<"O JOGO DUROU "<<time<<" HORA(S)"<<endl;
    }
return 0;
}
