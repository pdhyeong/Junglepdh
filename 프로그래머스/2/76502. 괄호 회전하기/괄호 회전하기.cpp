#include <string>
#include <vector>
#include <queue>
#include <iostream>
using namespace std;
string rotate(queue<char> q) {
    string s = "";
    while(!q.empty()){
        s += q.front();
        q.pop();
    }
    return s;
}
bool check(string s){
    vector<char> vec;
    for(int i = 0;i<s.size();i++){
        if(s[i] == '('){
            vec.push_back(s[i]);
        }
        else if(s[i] == '{'){
            vec.push_back(s[i]);
        }
        else if(s[i] == '['){
            vec.push_back(s[i]);
        }
        else if(s[i] == ')'){
            if(vec.empty()){
                return false;
            }
            if(vec[vec.size()-1] != '('){
                return false;
            }
            vec.pop_back();
        }
        else if(s[i] == '}'){
            if(vec.empty()){
                return false;
            }
            if (vec[vec.size()-1] != '{'){
                return false;
            }
            vec.pop_back();
        }
        else if(s[i] == ']'){
            if(vec.empty()){
                return false;
            }
            if(vec[vec.size()-1] != '['){
                return false;
            }
            vec.pop_back();
        }
    }
    if(!vec.empty()){
        return false;
    }
    return true;
}
int solution(string s) {
    int answer = 0;
    queue<char> vec;
    int cert = s.size();
    for(int i = 0;i<s.size();i++){
        vec.push(s[i]);
    }
    int n = 0;
    while(cert > n){
        string s = rotate(vec);
        if(check(s)){
            answer++;
        }
        vec.push(vec.front());
        vec.pop();
        n++;
    }
    return answer;
}