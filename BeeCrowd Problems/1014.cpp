//#include<bits/stdc++.h>
//using namespace std;

//int main ()
//{
   // double X,Y, Z=0;
   // cin>>X>>Y;
   // Z=X/Y;
   // cout<<fixed<<setprecision(3)<<Z<<" km/l"<<endl;
  //  return 0;
//}


#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int X;
    float Y;
    cin >> X;
    cout << fixed << setprecision(1);
    cin >> Y;
    cout << fixed << setprecision(3) << X/Y << " km/l" << endl;

    return 0;
}
