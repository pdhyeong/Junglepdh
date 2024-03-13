#include <iostream>
#include <functional>
#include <algorithm>
#include <string>
#include <queue>
#include <vector>
 
using namespace std;
 
typedef long long ll;
 
int n, m, k;
vector<pair<int, int>> beers;
 
struct cmp
{
    bool operator()(int a, int b)
    {
        return a > b;
    }
};
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    cin >> n >> m >> k;
 
    for (int i = 0; i < k; i++)
    {
        int v, c;
        cin >> v >> c;
        beers.push_back({v, c}); // 선호도, 도수 레벨
    }
 
    sort(beers.begin(), beers.end(), [](pair<int, int> p1, pair<int, int> p2) -> bool
         { return p1.second < p2.second; });
 
    priority_queue<int, vector<int>, cmp> pq;
 
    ll total = 0;
    for (auto beer : beers)
    {
        pq.push(beer.first); 
        total += beer.first;
 
        if (pq.size() > n) 
        {
            total -= pq.top();
            pq.pop();
        }
        if (pq.size() == n && total >= m)
        {
            cout << beer.second << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
