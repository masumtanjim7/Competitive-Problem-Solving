#include<iostream>
#include<string>
using namespace std;

int main()
{
    int m,a=0;
    cin>>m;
    string t;
    cin>>t;
    for (int i=0;i<m;i++)
    {
        if(t[i]==t[i+1])
        {
            a++;
        }
    }
    cout<<a<<endl;
return 0;
}
