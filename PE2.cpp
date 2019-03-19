#include<bits/stdc++.h> //arpita1998
using namespace std;

int main()
{
    unsigned long long int dp[4000004];
    dp[0]=1;
    dp[1]=2;
     unsigned long long int i,sum=2;
    for(i=2;i<33;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];

        if(dp[i]%2==0)
        sum+=dp[i];
    }
    cout<<sum;

}
