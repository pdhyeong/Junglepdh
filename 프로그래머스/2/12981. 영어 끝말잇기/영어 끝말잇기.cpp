#include <string>
#include <unordered_map>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    unordered_map<string,int> wordschecker;
    wordschecker[words[0]] += 1;
    char suffix = words[0][words[0].size()-1];
    for(int i = 1;i<words.size();i++){
        wordschecker[words[i]] += 1;
        if(wordschecker[words[i]] >= 2 || suffix != words[i][0]){
            answer.push_back(i % n + 1);
            answer.push_back(i / n + 1);
            return answer;
        }
        suffix = words[i][words[i].size()-1];
    }
    answer.push_back(0);
    answer.push_back(0);
    return answer;
}