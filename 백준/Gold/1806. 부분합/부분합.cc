#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;
int main() {
	int n, s;
    vector<int> arr;
	cin >> n >> s;
	for (int i = 0; i < n; ++i) {
        int k;
        cin >> k;
        arr.push_back(k);
	}

	int low = 0;
	int high = 0;
	int sum = arr[0];
	int len = n + 1;

	while (low <= high && high < n) {
		if (sum < s) {
			sum += arr[++high];
		}
		else {
			len = min(len, high - low + 1);
			sum -= arr[low++];
		}
	}

	if (len == n + 1) len = 0;
    cout << len;

	return 0;
}