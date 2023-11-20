#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int answer = 0;
    for(int i = 0;i<=n;i++){
        for(int j = 0;j<60;j++){
            for(int k = 0;k<60;k++){
                if(i % 10 == m || i / 10 == m || j % 10 == m || j / 10 == m || k % 10 == m || k / 10 == m){
                    answer++;
                }
            }
        }
    }
    cout << answer;
    return 0;
}