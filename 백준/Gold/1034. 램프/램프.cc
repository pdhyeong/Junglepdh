#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    int n,m;
    int k;
    cin >> n >> m;
    vector<string> board;
    unordered_map<string,int> table;
    for(int i = 0;i<n;i++){
        string s;
        cin >> s;
        board.push_back(s);
    }
    cin >> k;
	for (auto& i : board)
	{
		int zero = 0;
		for (auto& j : i)
			if (j == '0')
				zero++;

		if (zero > k || (zero % 2 != k % 2))
			continue;

		if (table.find(i) == table.end())
			table[i] = 1;
		else
			table[i]++;
	}

	int ans = 0;
	for (auto& pair : table)
		ans = max(ans, pair.second);
	cout << ans;
    return 0;
}