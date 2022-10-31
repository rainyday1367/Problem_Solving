#include <iostream>
#include <queue>
#include <string>
using namespace std;
int main()
{
	queue<int> q1;
	int n; int a;
	string str;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> str;
		if (str == "push")
		{
			cin >> a;
			q1.push(a);
		}
		if (str == "pop")
		{
			if (q1.empty() == 1)
				cout << -1 << '\n';
			else if (q1.empty() == 0)
			{
				cout << q1.front() << '\n';
				q1.pop();
			}
				
		}
		if (str == "size")
			cout << q1.size() << '\n';
		if (str == "empty")
		{
			if (q1.empty() == 1)
				cout << 1 << '\n';
			else if (q1.empty() == 0)
				cout << 0 << '\n';
		}
		if (str == "front")
		{
			if (q1.empty() == 1)
				cout << -1 << '\n';
			else if (q1.empty() == 0)
				cout << q1.front() << '\n';
		}
		if (str == "back")
		{
			if (q1.empty() == 1)
				cout << -1 << '\n';
			else if (q1.empty() == 0)
				cout << q1.back() << '\n';
		}
	}
	return 0;
}