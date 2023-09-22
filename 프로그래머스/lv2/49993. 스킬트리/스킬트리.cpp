#include <string>
#include <vector>
#include <iostream>
#include <stack>
using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    int su = 0;
    vector<int> st;
    for(int i = 0;i<skill_trees.size();i++){
        for(int j = 0;j<skill_trees[i].size();j++){
            char comp =  skill_trees[i][j];
            for(int k = 0;k<skill.size();k++){
                if(comp == skill[k]){
                    st.push_back(k);
                }
            }
        }
        for(int m = 0;m<st.size();m++){
            if(m != st[m]){
                su++;
                break;
            }
        }
        st.clear();
    }
    return skill_trees.size() - su;
}