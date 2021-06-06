
/*Problem Statement:- Take a String value in str variable from keyboard.Find out given string is palindrome or not.
If given string is not palindrome then try to make given string palindrome with minimum addition.
Test-Cases
"Hello"     output answer is "hellolleh"
"abb"		output answer is "abba"  
"aaabb"		output answer is "bbaaabb"*/
# include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s)
{
	int len=s.length();
	for (int i=0;i<len/2;i++)
	{
		if(s[i]!=s[len-i-1])
			return 0;
	}
	return 1;
}
int main()
{
	//Initialising the variables
	string str,x,y,rev;
	bool val;
	int strLen;
	cout<<"Enter the input string: ";
	getline(cin,str); // Input string
	
	strLen = str.length();
	rev=str;
	reverse(rev.begin(),rev.end()); // the reverse function returns nothing and directly reverses the string passed 
	//(call by reference method)
	
	if (isPalindrome(str)==0)// String is not palindrome and is converted to palindrome
	{
		for(int i=0; i<strLen;++i)
		{
			x = str.substr(0,i);
			reverse(x.begin(),x.end());
			x = str+x; // used in if

			y = rev.substr(0,i);
			y = y+str; // used in else if
			if (isPalindrome(x)==1)
			{
				cout<<"The new Palindrome string with minimum addition is: "<<x;
				break;
			}// there can be no statements in between if and else as it will lead error so write statements within if-else,prior 
			// or after the if-else block.
			else if(isPalindrome(y)==1)
			{
				cout<<"The new Palindrome string with minimum addition is: "<<y;
				break;// break is done to terminate loop after the minimum addition which makes the string palindrome
			}
		}
	}
	else
		cout<<"The input string is Palindrome.";
	return 0;
}