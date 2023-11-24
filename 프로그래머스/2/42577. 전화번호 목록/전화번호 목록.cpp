#include <string>
#include <vector>
#include <iostream>
#include <map>
using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    map<string,int> st;
    for(auto &num : phone_book){
        st[num]++;
    }
    for(int i = 0;i<phone_book.size();i++){
        string s="";
        for(int j = 0;j<phone_book[i].size()-1;j++){
            s+=phone_book[i][j];
            if(st.find(s) != st.end()){
                return false;
            }
        }
    }
    return answer;
}