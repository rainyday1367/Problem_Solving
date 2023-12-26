#include <iostream>
#include <vector>
using namespace std;

int dp[1001][1001];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	string x, y;
	cin >> x >> y;

	int m = x.length();
	int n = y.length();


	for (int i = 0; i <= m; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 || j == 0)
				dp[i][j] = 0;

			else if (x[i - 1] == y[j - 1])
				dp[i][j] = dp[i - 1][j - 1] + 1;

			else
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
		}
	}

	int idx = dp[m][n];
	cout << idx;
	return 0;
}