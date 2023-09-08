#include <string>
#include <vector>
#include <map>
#include <iostream>
using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    map<string,int> mymap;
    for(int i = 0;i<s.size();i++){
        map<string, int>::iterator it = mymap.find(to_string(s[i]));
        if (it != mymap.end()) {
            answer.push_back(i-(it->second));
            mymap[it->first] = i;
        } else {
            answer.push_back(-1);
            mymap[to_string(s[i])] = i;
        }
        cout << '\n';
    }
    return answer;
}