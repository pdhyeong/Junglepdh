#include <string>
#include <vector>
#include <algorithm>
#include <iostream> 
using namespace std;
bool compare(string& a,string& b){
    if(b + a > a + b){
        return true;
    }
    return false;
}
string solution(vector<int> numbers) {
    string answer = "";
    vector<string> comp;
    
    for(int i = 0;i<numbers.size();i++){
        comp.push_back(to_string(numbers[i]));
    }
    sort(comp.begin(), comp.end(), compare);
    for(int i = comp.size()-1;i>=0;i--){
        answer += comp[i];
    }
    if(answer[0] == '0'){
        return "0";
    }
    return answer;
}