#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l,r,maxA,maxB,temp,best;
    cin>>l>>r;
    best=0;
    for(int i=l;i<r;++i)
    {
        for(int j=i;j<=r;++j)
        {
            temp=i^j;
            if(temp>=best)
            {
                best=temp;
                maxA=i;
                maxB=j;
            }
        }
    }
    cout<<maxA<<"^"<<maxB<<"="<<best;
    return 0;
}