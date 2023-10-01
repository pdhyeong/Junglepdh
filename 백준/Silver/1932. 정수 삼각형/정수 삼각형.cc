#include <iostream>
#include<algorithm>

using namespace std;

int hr[501][501] = { 0 , };
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			int k;
			cin >> k;
			hr[i][j] = k;
		}
	}
	int up_left = 0;
	int up = 0;
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (j == 0)
			{
				up_left = 0;
			}
			else
				up_left = hr[i - 1][j - 1];
			if (j == i)
			{
				up = 0;
			}
			else
				up = hr[i-1][j];
			hr[i][j] = hr[i][j] + max(hr[i - 1][j - 1], hr[i-1][j]);
		}
	}
	int result = 0;
	for (int i = 0; i < n; i++)
	{
		result = max(result, hr[n - 1][i]);
	}
	cout << result << endl;
	return 0;
}