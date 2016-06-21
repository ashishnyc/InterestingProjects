#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

void addOne(string& str)
{
	long int N = str.length();
	string::reverse_iterator it;
	str.resize(N+1,'0');
	int carry =1;
	for(it = str.rbegin(); it != str.rend(); ++it)
	{
		char ch;

		if((it +1) == str.rend())
			ch = '0';
		else
			ch = *(it + 1);

		ch = ch + carry;
		
		if(ch == 58)
		{
			ch = ch - 10;
			carry = 1;
		}
		else
			carry = 0;

		*it = ch;
	}
	if(str[0] == '0')
		str.erase(str.begin());
}

void makePalindrome(string& str)
{
	long int N = str.length();
	string lStr,rStr;
	if(N == 1)
	{
		str = "11";
		return;
	}
	for(long int i = 0; i < N; i++)
	{
		if(i < (N/2))
			lStr += str[i];
		else if(i > (N/2))
			rStr += str[i];
		else
		{
			if(N%2 == 0)
				rStr += str[i];
			else
				lStr += str[i];
		}

	}

	if(N%2 == 0)
	{
		reverse(lStr.begin(),lStr.end());
		int sSize = lStr.length();
		if(lStr <= rStr)
		{
			reverse(lStr.begin(),lStr.end());
			addOne(lStr);
			reverse(lStr.begin(),lStr.end());
		}
		rStr = lStr;
		
		if(sSize != lStr.length())
			rStr.erase(rStr.begin());

		reverse(lStr.begin(),lStr.end());
	}
	else
	{
		int sSize = lStr.length();
		addOne(lStr);
		rStr = lStr;
		reverse(rStr.begin(),rStr.end());
		rStr.erase(rStr.begin());
		if(sSize != lStr.length())
			rStr.erase(rStr.begin());
	}
	str = lStr + rStr;
}

bool isPalindrome(string str)
{
	long int N;
	N = str.length();
	for(long int i = 0; i < (N/2); i++)
	{
		if(str[i] != str[N-i-1])
			return false;
	}
	return true;
}

int main()
{
	int T;
	cin >> T;
	while(T--)
	{
		string str;
		cin >> str;
		makePalindrome(str);
		cout << str << endl;
	}

	return 0;
}
