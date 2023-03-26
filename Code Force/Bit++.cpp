#include<iostream>
using namespace std ;

int main ()
{
    int m, x=0;
    cin>>m;

    string s;
    while (m--)
    {
        cin>>s;
        if (s[1]=='+')
        {
            ++x;
        }
        else
        {
            --x;
        }
    }
    cout<<x<<endl;
return 0;
}
