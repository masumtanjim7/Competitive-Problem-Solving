#include<bits/stdc++.h>
using namespace std;

int main()
{
 int Y, M, D;
 cin>>D;

 Y = D / 365;
 M = D % 365 / 30;
 D = D % 365 % 30;

 cout<<Y<<" ano(s)"<<endl;
 cout<<M<<" mes(es)"<<endl;
 cout<<D<<" dia(s)"<<endl;
 return 0;
}
