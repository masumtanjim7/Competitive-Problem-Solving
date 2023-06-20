#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string m;
    cin>>m;
    sort(m.begin(), m.end());
    m.erase(unique(m.begin(), m.end()), m.end());
    if (m.length() % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
return 0;
}
