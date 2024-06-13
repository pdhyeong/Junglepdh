#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string name;
int n;

bool check(const string& str) {
    int l = str.length();
    for (int start_idx = 0; start_idx < l; ++start_idx) {
        if (str[start_idx] == name[0]) {
            for (int end_idx = start_idx; end_idx < l; ++end_idx) {
                if (str[end_idx] == name[n - 1]) {
                    int avg_gap = (end_idx - start_idx) / (n - 1);
                    int cnt = 0;
                    while (cnt < n) {
                        if (str[start_idx + avg_gap * cnt] == name[cnt]) {
                            cnt++;
                            continue;
                        }
                        break;
                    }
                    if (cnt == n) {
                        return true;
                    }
                }
            }
        }
    }
    return false;
}

int main() {
    int N;
    cin >> N;
    cin.ignore();  // ignore newline after N
    getline(cin, name);
    n = name.length();
    vector<string> kanbans(N);
    for (int i = 0; i < N; ++i) {
        getline(cin, kanbans[i]);
    }

    int cnt = 0;
    for (const auto& kanban : kanbans) {
        if (check(kanban)) {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}
