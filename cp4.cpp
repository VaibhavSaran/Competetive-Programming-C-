/*3 variable hai a,b,c. kaise bhi aapas mai swap karne hai. One line code. CPP.*/
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int x=1,y=2,z=3;
	x = (x+y+z)-(y=z)-(z=x);
	cout<<x<<" "<<y<<" "<<z;
	return 0;
}
