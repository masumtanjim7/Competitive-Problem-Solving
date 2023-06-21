#include<iostream>
using namespace std;

int main ()
{
    int m,t;
    cin>>m>>t;
    for(int i=0; i<t; i++)
    {
        if(m%10==0)
        {
            m/=10;
        }
        else
            m--;
    }
    cout<<m<<endl;
return 0;
}
