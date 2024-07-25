#include <iostream>
#include <string>
#include <vector>

using namespace std;
string change_low(string s){
    for(int i = 0;i<s.size();i++){
        if(s[i] >= 'A'){
            s[i] = tolower(s[i]);
        }
    }
    return s;
}
int solution(string myString, string pat) {
    int answer = 0;
    
    if(myString.size() < pat.size()) return 0;
    string temp = change_low(myString);
    string comp = change_low(pat);
    
    if(temp.find(comp) != string::npos){
        return 1;
    }
    return answer;
}