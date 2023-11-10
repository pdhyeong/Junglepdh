#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;
int main(){
    queue<int> q;
    int n,m;
    cin >> n >> m;
    for(int i = 0;i<n;i++){
        q.push(i+1);
    }
    int k = 0;
    cout << "<";
    while(q.size() > 1){
        k++;
        for(int i = 1;i<m;i++){
            int tmp = q.front();
            q.pop();
            q.push(tmp);
        }
        cout << q.front() << ", ";
        q.pop();
    }
    cout << q.front() << ">";
    return 0;
}