#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    long long n;
    cin >> n;
	long long start = 0, end = n;
	while (start <= end) {	
		long long mid = (start + end) / 2;
		if (pow(mid, 2) >= n) end = mid - 1;
		else start = mid + 1;
	}
	cout << start;
    return 0;
}