#include<iostream>
#include<stack>
#include<queue>
#include<vector>
using namespace std;

int main()
{
	while(true)
	{
		int N;
		cin >> N;
		if(N==0)
			break;
		
		vector<int> vec(N,0);
		stack<int> st;
		queue<int> qu;
		for(int i=0;i<N;++i)
			cin >> vec[i];
		int cnt=1;
		for(int i=0;i<N;++i)
		{
			if(cnt== vec[i])
			{
				cnt++;
				continue;
			}
			if(st.size() != 0 && st.top() == cnt)
			{
				cnt++;
				st.pop();
				while(st.size() != 0 && st.top() < vec[i])
				{
					if(cnt== st.top())
					{
						cnt++;
						st.pop();
					}
				}
				st.push(vec[i]);
				continue;
			}
			st.push(vec[i]);
		}
		while(st.size() != 0)
		{
			if(st.top() == cnt)
			{
				cnt++;
				st.pop();
			}
			else
				break;
		}
		if(cnt == N || cnt ==(N+1))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	return 0;
}
