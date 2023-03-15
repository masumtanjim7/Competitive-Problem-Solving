#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
    double R,A;
    cout<< "Input value of R"<<endl;
    cin>>R;
    A=3.14159*R*R;
    cout << "A=" << fixed << setprecision(4) << A << endl;
}
