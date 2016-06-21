#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
int main()
{
	int t;
	cin >> t;
	string line;
	getline(cin,line);
	while(t--)
	{
		getline(cin,line); // empty line
		getline(cin,line);
		size_t N = line.size();

		size_t mac_pos = line.find("machula");
		size_t plus_pos = line.find("+");
		size_t eq_pos = line.find("=");
		int a,b,c;
		if(mac_pos < plus_pos)
		{
			b = atoi(line.substr(plus_pos + 1, (eq_pos - mac_pos - 1)).c_str());
			c = atoi(line.substr(eq_pos + 1, (N - eq_pos)).c_str());

			cout << (c - b) << " + " << b << " = " << c << endl;
		}
		else if(mac_pos < eq_pos)
		{
			a = atoi(line.substr(0,plus_pos).c_str());
			c = atoi(line.substr(eq_pos + 1, (N - eq_pos)).c_str());

			cout << a << " + " << (c - a) << " = " << c << endl;
		}
		else
		{
			a = atoi(line.substr(0,plus_pos).c_str());
			b = atoi(line.substr(plus_pos + 1, (eq_pos - mac_pos -1)).c_str());

			cout << a << " + " << b << " = " << (a+b) << endl;
		}
	}
	return 0;
}
