#include<iostream>
#include<cstring>
 
#define endl "\n"
#define MAX 100000 + 1
using namespace std;
 
int N;
int Arr[2][MAX];
int DP[2][MAX];
 
int Bigger(int A, int B) { if (A > B) return A; return B; }
 
void Initialize()
{
    memset(Arr, 0, sizeof(Arr));
    memset(DP, 0, sizeof(DP));
}
 
void Input()
{
    cin >> N;
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            cin >> Arr[i][j];
        }
    }
}
 
void Solution()
{
    DP[0][0] = DP[1][0] = 0;
    DP[0][1] = Arr[0][1];
    DP[1][1] = Arr[1][1];
 
    for (int i = 2; i <= N; i++)
    {
        DP[0][i] = Bigger(DP[1][i - 1], DP[1][i - 2]) + Arr[0][i];
        DP[1][i] = Bigger(DP[0][i - 1], DP[0][i - 2]) + Arr[1][i];
    }
    cout << Bigger(DP[0][N], DP[1][N]) << endl;
}
 
void Solve()
{
    int Tc;
    cin >> Tc;
    for (int T = 1; T <= Tc; T++)
    {
        Initialize();
        Input();
        Solution();
    }
}
 
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    //freopen("Input.txt", "r", stdin);
    Solve();
 
    return 0;
}
