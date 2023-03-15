#include<iostream>
#include <iomanip>
using namespace std;

int main ()

{
    double A,B, MEDIA=0;
    cin>>A>>B;
    A=A*3.5;
    B=B*7.5;
    MEDIA=(A+B)/(3.5+7.5);
    cout<<"MEDIA = "<< fixed << setprecision(5) << MEDIA<<endl;
return 0;
}


