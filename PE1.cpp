#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int>s;
    long long int i,sum=0;

    for(i=1;i<1000;i++)
        if((i%3==0 || i%5==0) && s.find(i)==s.end())
    {
        sum+=i; s.insert(i);
    }
    cout<<sum;
}
