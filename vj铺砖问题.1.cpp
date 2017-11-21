#include<iostream>
using namespace std;
int main()
{
    long long n, m, a,  b, c,d;
    while(cin>>n>>m>>a)
    {
        if(n%a==0)b=n/a;
        else b=n/a+1;
        if(m%a==0)c=m/a;
        else c= m/a+1;
        d=b*c;
        cout<< d<<endl;
    }
}