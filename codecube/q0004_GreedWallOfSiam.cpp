//
// Question from codecube.in.th
// #0004 Greed Wall of Siam
//
//
#include<iostream>
using namespace std;
long long gcd(long long a, long long b)
{
    if(a==0) return b;
    return gcd(b%a,a);
}
int main()
{
    long long n;
    cin>>n;

    long long h[n];
    for(int i=0;i<n;i++)
    {
        cin>>h[i];
    }

    long long tmp = gcd(h[0],h[1]);
    for(int i=2;i<n;i++)
    {
        tmp = gcd(tmp,h[i]);
    }
    long long result = 0;
    for(int i=0;i<n;i++)
    {
        result += h[i]/tmp;
    }
    cout<<result;

    return 0;
}
