#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

bool checkConv(string & s, int & num)
{
	if(s.find("machula") != -1)
		return false;
	num = atoi(s.c_str());
	return true;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s1,plus,s2,eq,s3;
		cin >> s1 >> plus >> s2 >> eq >> s3;
		int a = 0, b = 0, c = 0;
		bool foundA, foundB, foundC;
		foundA = checkConv(s1,a);
		foundB = checkConv(s2,b);
		foundC = checkConv(s3,c);

		if(!foundA)
			cout << (c - b) << " + " << b << " = " << c << endl;
		else if(!foundB)
			cout << a << " + " << (c-a) <<  " = " << c << endl;
		else
			cout << a << " + " << b  << " = " << a+b << endl;
	}
	return 0;
}
