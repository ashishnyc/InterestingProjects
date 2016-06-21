#include<iostream>
#include<cstring>
#include<stack>

using namespace std;
int getPrecedence(char ch)
{
	if( ch == '^')
		return 4;
	if( ch == '*' || ch == '/')
		return 3;
	if( ch == '+' || ch == '-')
		return 2;
	return 1;
}
void conertRPN(string str)
{
	stack<char> st;
	int n = str.length();
	bool exprStart = false;
	//cout << n << endl;
	for(int i = 0; i< n; ++i)
	{
		char ch = str[i];
		if( ch == '(')
		{
			exprStart = false;
			st.push(ch);
			continue;
		}
		if( ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^')
		{
			/*
			if(st.size() == 0)
			{
				st.push(ch);
				continue;
			}

			int prec = getPrecedence(ch);
			while(getPrecedence(st.top()) >= prec)
			{
				cout << st.top();
				st.pop();
			}
			*/
			st.push(ch);
			continue;
		}

		if(ch == ')')
		{
			while(st.top() != '(')
			{
				cout << st.top();
				st.pop();
			}
			st.pop();
			continue;
		}

		if(exprStart)
		{
			cout << ch; 
			cout << st.top();
			st.pop();
			exprStart = false;
		}
		else
		{
			cout << ch;
			exprStart = true;
		}
	}
	while(st.size() != 0)
	{
		if(st.top() == '(')
		{
			st.pop();
			continue;
		}
		cout << st.top();
		st.pop();
	}
	
	cout << "\n";
}
int main()
{
	string expr;
	int t;
	cin >> t;
	while(t--)
	{
		cin >> expr;
		conertRPN(expr);
	}
	return 0;
}
