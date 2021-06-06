/*Problem-Statement:
Virendra is playing a mobile game that starts with consecutively numbered clouds.
Some of the clouds are dark and others are white.He can jump on any white cloud having a number that is equal to the 
number of current cloud plus 1 or 2.He must avoid the dark cloud.Determine the minimum number of jumps it will take virendra from 
him starting position to the last cloud.it always posible to win the game.
For each game virendra will get an array of cloud numbered 0 if they are safe or 1 if they must be avoided.
for example c=[0,1,0,0,0,1,0] indexed from 0...6.the number on each cloud is its index in the last 
so he must avoid the clouds at index 1 and 5.
He could follow the following two path:0->2->4->6 or 0->2->3->4->6.the first path takes 3 jumps while the second takes 4.

Input:- The first line contain an integer n,the total number of cloud.
		The second line contains n space-separted binary integers describing cloud c[i] where 0<= i <n
Constraints:
1) 2<= n <=100
2) c[i]={0,1}
3) c[0]=c[n-1]=0

Example
n=7
array c=0 0 1 0 0 1 0

Result will be 4
*/
# include <iostream>
using namespace std;
int main()
{
	int path[100],n,viru;
	cout<<"Enter the number of clouds: ";
	cin>>n;
	cout<<"Enter the cloud array: ";
	for (int i=0;i<n;i++)
		cin>>path[i];
	cout<<"0->";
	viru=0;
	for(int i=0;i<n;i++)
	{
		if(viru==n-1)
			break;
		if (path[viru+1]==0)
		{
			if (path[viru+2]==0)
				viru+=2;
			else
				viru+=1;
		}
		else if (path[viru+2]==0)
			viru+=2;
		cout<<viru<<"->";
	}
	cout<<"\b\b"<<"  ";
	return 0;
}