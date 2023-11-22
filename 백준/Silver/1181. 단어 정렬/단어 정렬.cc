#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

bool compare(string &a,string &b){
  if(a.length() < b.length()){
    return true;
  }
  else {
    if(a.length() == b.length()){
      return a < b;
    }
    return false;
  }
}
int main(){
  int n;

  cin >> n;
  vector<string> strings;
  
  while(n--){
    string s;
    cin >> s;

    strings.push_back(s);
  }
  sort(strings.begin(),strings.end(),compare);
  
  vector<string> answer;

  answer.push_back(strings[0]);
  for(int i = 1;i<strings.size();i++){
    if(strings[i-1] != strings[i]){
      answer.push_back(strings[i]);
    }
  }
  
  for(int i = 0 ;i <answer.size();i++){
    cout << answer[i] << '\n';
  }
  return 0;
}