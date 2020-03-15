//
// Sum of the first 500 jumpy numbers
// (A jumpy number is a positive integer digits neither nor decrease)
//
//
#include<iostream>
using namespace std;

int main()
{
    int sum = 0;
    int n = 500;
    for(int i=1; i<n/100 ;i++)
    {
        for(int j=0; j<=9; j++)
        {
            if(i==j)
                continue;
            for (int k=0; k<=9; k++)
            {
                if(j==k)
                    continue;
                sum = sum+((i*100)+(j*10)+(k));
            }
        }
    }
    sum = sum+n;
    cout<<sum<<endl;
}

