#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;
unordered_map<string,int> umap;

void init(){
    int go = 1;
    for(char a = 'A'; a<='Z';a++){
        string s  = "";
        s += a;
        umap[s] = go;
        go++;
    }
}
vector<int> solution(string msg) {
    vector<int> answer;
    init();
    int start = 27;
    string s = "";
    for(int i = 0;i<msg.length();i++){
        s+=msg[i];
        if(umap[s] == 0){
            umap[s] = start++;
            string as = s.substr(0,s.size()-1);
            answer.push_back(umap[as]);
            i--;
            s = "";
        }
    }
    answer.push_back(umap[s]);
    return answer;
}