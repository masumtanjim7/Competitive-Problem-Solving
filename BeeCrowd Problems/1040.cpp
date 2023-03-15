#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n1,n2,n3,n4,sum,n5;
    cin>>n1>>n2>>n3>>n4;

    sum=(n1*2+n2*3+n3*4+n4)/10;
    cout<<fixed<<setprecision(1)<<"Media: "<<sum<<endl;
    if (sum>=7.0)
    {
        cout<<"Aluno aprovado."<<endl;
    }
       else if (sum >= 5.0)
    {
        cout<<"Aluno em exame."<<endl;
        cin>>n5;

        cout<<setprecision(1)<<"Nota do exame: "<<n5<<endl;
        if (n5 + sum / 2.0 > 5.0){
            cout<<"Aluno aprovado."<<endl;
        }
        else{
            cout<<"Aluno reprovado."<<endl;
        }

        cout<<setprecision(1)<<"Media final: "<<(n5 + sum ) / 2.0<<endl;
    }
    else{
        cout<<"Aluno reprovado."<<endl;
    }
    return 0;
}

