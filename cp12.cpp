/*Problem Statement: Given two integer,L and R,find the maximal value of a xor b,written a+b,
where a and b satisfy the follwoing condition:
            L<= a <= b <=R
Example:- if L=11 and R=12 then
    11 + 11 = 0 ['+' represnt xor operation]
    11 + 12 = 7
    12 + 12 = 0
Result:- 7*/
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