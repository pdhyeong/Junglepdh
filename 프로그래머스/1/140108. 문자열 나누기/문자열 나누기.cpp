#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;
unordered_map<char,int> mp;

void clear(){
    for(auto pair:mp){
        mp[pair.first] = 0;
    }
}

bool check(char main){
    int data = mp[main];
    int sum = 0;
    for(auto pair:mp){
        if(pair.first != main){
            sum += mp[pair.first];
        }
    }
    if(sum == data) return true;
    return false;
}

bool remain(){
    int sum = 0;
    for(auto pair:mp){
        sum += pair.second;
    }
    return sum != 0 ? true:false;
}

int solution(string s) {
    int answer = 0;
    for(char i = 'a';i<='z';i++){
        mp[i] = 0;
    }
    char start = s[0];
    for(int i = 0;i<s.size()-1;i++){
        mp[s[i]]++;
        if(check(start)){
            clear();
            answer++;
            start = s[i+1];
        }
    }
    mp[s[s.size()-1]]++;
    if(remain()){
        answer++;
    }
    return answer;
}