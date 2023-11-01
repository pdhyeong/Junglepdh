#include <string>
#include <vector>
#include <iostream>
#include <map>
using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    map<string,int> mymap;
    for(int i = 0;i<words.size();i++){
        mymap[words[i]]++;
    }
    char prev;
    char now;
    int turn = 0;
    for(int i = 0;i<words.size();i+=n){
        turn++;
        bool flag = false;
        // turn
        for(int j = i;j<n+i && j < words.size() ;j++){
            if(j > 0){
                prev = words[j-1][words[j-1].size()-1];
                now = words[j][0];
                if(prev != now){
                    answer.push_back(j % n + 1);
                    answer.push_back(turn);
                    flag = true;
                    break;
                }
            }
            if(mymap.find(words[j]) == mymap.end()){
                answer.push_back(j % n + 1);
                answer.push_back(turn);
                flag = true;
                break;
            }
            else{
                mymap.erase(words[j]);
            }
        }
        if(flag){
            break;
        }
        cout << '\n';
    }
    if(answer.size() == 0){
        answer.push_back(0);
        answer.push_back(0);
    }
    return answer;
}