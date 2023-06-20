#include<iostream>
#include<string>
using namespace std;

int main()
{
    int lower=0,upper=0;
    string m;
    cin>>m;
    for (int i=0; i<m.size(); i++)
    {
        if (isupper(m[i]))
        {
            upper++;
        }
        else
        {
            lower++;
        }
    }
    if (lower>upper)
    {
        for (int i=0; i<m.size(); i++)
        {
            m[i]=tolower(m[i]);
        }
        cout<<m<<endl;
    }

    if (lower==upper)
    {
        for (int i=0; i<m.size(); i++)
        {
            m[i]=tolower(m[i]);
        }
        cout<<m<<endl;
    }
    if (lower<upper)
    {
        for (int i=0; i<m.size(); i++)
        {
            m[i]=toupper(m[i]);
        }
        cout<<m<<endl;
    }
return 0;
}
