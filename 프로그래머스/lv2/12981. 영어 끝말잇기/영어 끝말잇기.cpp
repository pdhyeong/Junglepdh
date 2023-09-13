#include <string>
#include <vector>
#include <iostream>
#include <set>
using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    vector<string> myvec;
    bool flag1 = false;
    bool flag2 = false;
    for(int i = 0;i<words.size();i+=n){
        for(int j = i;j < n + i && words.size() > j; j++){
            for(int k = 0;k<myvec.size();k++){
                string st= myvec[myvec.size()-1];
                char compchar = st[st.size()-1];
                if(myvec[k] == words[j] || compchar != words[j][0]){
                    answer.push_back((j%n)+1);
                    answer.push_back(((i+n) / n));
                    flag1 = true;
                    break;
                }
            }
            if(flag1){
                flag2 = true;
                break;
            }
            myvec.push_back(words[j]);
        }
        if(flag2){
            break;
        }
    }
    if(answer.size() == 0){
        answer.push_back(0);
        answer.push_back(0);
    }
    return answer;
}