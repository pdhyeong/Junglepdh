#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main(){
    queue<int> q;
    int n;
    cin >> n;
    for(int i = 1;i<=n;i++){
        q.push(i);
    }
    while(!q.empty()){
        int save_data = q.front();
        q.pop();
        cout << save_data << ' ';
        q.push(q.front());
        q.pop();
    }
    return 0;
}