#include <iostream>
using namespace std;
int main()
{
    int M,X;

    cin >> M;

    cout << M <<"\n";
    cout << M/100 << " nota(s) de R$ 100,00\n";
    X = (M%100);
    cout << X/50 << " nota(s) de R$ 50,00\n";
    X = (X%50);
    cout << X/20 << " nota(s) de R$ 20,00\n";
    X = (X%20);
    cout << X/10 << " nota(s) de R$ 10,00\n";
    X = (X%10);
    cout << X/5 << " nota(s) de R$ 5,00\n";
    X = (X%5);
    cout << X/2 << " nota(s) de R$ 2,00\n";
    X = (X%2);
    cout << X/1 << " nota(s) de R$ 1,00\n";
    return 0;
}
