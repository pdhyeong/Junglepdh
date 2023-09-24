#include <string>
#include <vector>

using namespace std;
bool visited1[40] = {false,};
bool visited2[40] = {false,};
bool visited3[40] = {false,};
int cnt = 0;
void nqueen(int cur,int n){
  if (cur == n){
    cnt += 1;
    return;
  }

  for(int i = 0;i<n;i++){
    if (visited1[i] || visited2[i + cur] || visited3[cur-i+n-1])
        continue;
    visited1[i] = true;
    visited2[i + cur] = true;
    visited3[cur-i+n-1] = true;
    nqueen(cur + 1,n);
    visited1[i] = false;
    visited2[i+cur] = false;
    visited3[cur-i+n-1] = false;
  }
}
int solution(int n) {
    int answer = 0;
    nqueen(0,n);
    return cnt;
}