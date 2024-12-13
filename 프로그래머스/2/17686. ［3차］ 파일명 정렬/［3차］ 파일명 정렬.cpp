#include<iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct info {
    string head;
    int num;
    int n;
};

bool comp(const pair<info,string> a,const pair<info,string> b){
    if(a.first.head == b.first.head){
        if(a.first.num == b.first.num) return a.first.n < b.first.n;
        return a.first.num < b.first.num;
    }
    return a.first.head < b.first.head;
}

pair<int,int> check(string s){
    int start = 0;
    int end = s.size();
    
    for(int i = 0;i<s.size();i++){
        if(s[i] >= '0' && s[i] <= '9'){
            start = i;
            break;
        }
    }
    
    for(int i = start;i<s.size();i++){
        if(s[i] < '0' || s[i] >'9'){
            end = i;
            break;
        }
    }
    return {start,end};
}

int find_number(int start,int end, string s){
    string temp;
    for(int i = start;i<=end;i++){
        temp += s[i];
    }
    int temp_result = stoi(temp);
    return temp_result;
}

string content(int start,string s){
    string result;
    for(int i = 0;i<start;i++){
        s[i] = tolower(s[i]);
        result += s[i];
    }
    return result;
}

template <class T>
void print_vector(vector<T> vec){
    for(int i = 0;i<vec.size();i++){
        cout << vec[i] << ' ';
    }
}

vector<string> solution(vector<string> files) {
    vector<string> answer;
    vector<pair<info,string>> test;
    
    for(int i = 0;i<files.size();i++){
        pair<int,int> start_end = check(files[i]);
        int number_data = find_number(start_end.first,start_end.second,files[i]);
        string string_data = content(start_end.first,files[i]);
        
        info s;
        s.n = i;
        s.num = number_data;
        s.head = string_data;
        test.push_back({s,files[i]});
    }
    sort(test.begin(),test.end(),comp);   
    
    for(int i = 0;i<test.size();i++){
        answer.push_back(test[i].second);
    }
    return answer;
}