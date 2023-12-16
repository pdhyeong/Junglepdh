#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    unordered_map<string,int> mymap;
    vector<string> vec;
    for(int i = 0;i<n;i++){
        string s;
        cin >> s;
        mymap[s] = 1;
    }
    int answer = 0;
    for(int i = 0;i<m;i++){
        string s;
        cin >> s;
        if(mymap.find(s) != mymap.end()){
            answer++;
        }
    }
    cout << answer;
    return 0;
}