#include <iostream>
#include <vector>
#define endl "\n"
#define MAX 20

using namespace std;

int N, M, Answer;
char MAP[MAX][MAX];
vector<pair<int, int> > Coin;
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

int Min(int A, int B) {
    if (A < B) return A;
    return B;
}

void Input() {
    Answer = 99999999;
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> MAP[i][j];
            if (MAP[i][j] == 'o') Coin.push_back(make_pair(i, j)); // 동전의 좌표를 Vector에 저장
        }
    }
}

bool Range_Over(int a, int b) {
    if (a < 0 || b < 0 || a >= N || b >= M) return true;
    return false;
}

void Move(int x, int y, int xx, int yy, int Cnt, int dir) {
    if (Answer < Cnt) return; // 기존의 횟수보다 더 많이 버튼을 눌렸다면 더 이상 해볼 필요가 없다. (최소값이 아니므로)
    if (Cnt > 10) { // 10번 이상인 경우, 더이상 진행할 필요가 없다.
        Answer = Min(Answer, Cnt); // 기존의 횟수와 비교해서 값 갱신만 시켜주고 종료.
        return;
    }
    
    int nx = x + dx[dir];
    int ny = y + dy[dir];
    int nxx = xx + dx[dir];
    int nyy = yy + dy[dir];

    if (Range_Over(nx, ny) && Range_Over(nxx, nyy)) return; // 두 동전 모두 떨어진다면 종료
    else if (Range_Over(nx, ny) && !Range_Over(nxx, nyy)) { // 한 동전만 떨어지는 경우
        Answer = Min(Answer, Cnt);
        return;
    } else if (!Range_Over(nx, ny) && Range_Over(nxx, nyy)) {
        Answer = Min(Answer, Cnt);
        return;
    }

    if (MAP[nx][ny] == '#') {
        nx = x;
        ny = y;
    }
    if (MAP[nxx][nyy] == '#') {
        nxx = xx;
        nyy = yy;
    }

    for (int i = 0; i < 4; i++) { // 이 다음 진행방향으로
        Move(nx, ny, nxx, nyy, Cnt + 1, i);
    }
}

void Solution() {
    for (int i = 0; i < 4; i++) {
        int x = Coin[0].first;
        int y = Coin[0].second;
        int xx = Coin[1].first;
        int yy = Coin[1].second;
        Move(x, y, xx, yy, 1, i);
    }
}

void Solve() {
    Input();
    Solution();
    if (Answer > 10) Answer = -1;
    cout << Answer << endl;
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //freopen("Input.txt", "r", stdin);
    Solve();
    return 0;
}
