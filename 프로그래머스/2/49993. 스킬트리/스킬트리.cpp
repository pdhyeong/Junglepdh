#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    int count = 0;
    for(int i = 0;i<skill_trees.size();i++){
        int index = 0;
        string temp = "";
        for(int j = 0;j<skill_trees[i].size();j++){
            for(int k = 0;k<skill.size();k++){
                if(skill_trees[i][j] == skill[k]){
                    temp += skill[k];
                    break;
                }
            }
        }
        for(int comp_index = 0;comp_index<temp.size();comp_index++){
            if(temp[comp_index] != skill[comp_index]){
                count++;
                break;
            }
        }
    }
    return skill_trees.size()-count;
}