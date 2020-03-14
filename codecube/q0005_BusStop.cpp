//
// Question from codecube.in.th
// #0005 Bus Stop!!
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
    int n = 0;
    cin >> n;

    long long t[n];
    for (int i=0 ; i<n ; i++)
    {
        cin>>t[i];
    }
    long long result = (t[0]/gcd(t[0],t[1]))*t[1];
    for (int i=2; i<n ; i++)
    {
        result = (result/gcd(result,t[i]))*t[i];
    }

    cout<<result;

    return 0;
}
