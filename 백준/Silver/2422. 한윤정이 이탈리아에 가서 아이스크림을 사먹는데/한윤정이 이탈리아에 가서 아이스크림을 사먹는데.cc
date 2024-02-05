#include <iostream>
#include <vector>
 
using namespace std;
 
int n, m;
 
int cnt;
bool x[201][201];
int ans[3];
 
 
void recur(int idx, int cur)
{
    if (cur == 3)
    {
        cnt++;
        return;
    }
 
    for (int i = idx + 1; i < n + 1; i++)
    {
        if (cur == 2 && x[ans[0]][i]) continue;
        if (x[idx][i]) continue;
        ans[cur] = i;
        recur(i, cur + 1);
    }
}
 
int main()
{
    cin >> n >> m;
 
    int a, b;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        x[a][b] = 1;
        x[b][a] = 1;
    }
 
    recur(0, 0);
    cout << cnt;
 
    return 0;
}