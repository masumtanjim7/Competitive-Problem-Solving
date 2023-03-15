#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int A,B,C,X,Y;
    cin>>A>>B>>C;
    X=(A+B+abs(A-B))/2;
    Y=(X+C+abs(X-C))/2;
    cout<<Y<<" eh o maior"<<endl;
    return 0;
}
