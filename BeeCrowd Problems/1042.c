#include<stdio.h>
int main()
{
    int a,b,c,m,x,y,z;
    scanf("%d %d %d",&a,&b,&c);
    x = a;
    y = b;
    z = c;
    if(a > b) {m = a;a = b;b = m;}
    if(a > c) {m = a;a = c;c = m;}
    if(b > c) {m = b;b = c;c = m;}
    printf("%d\n%d\n%d\n\n",a,b,c);
    printf("%d\n%d\n%d\n",x,y,z);
    return 0;
}
