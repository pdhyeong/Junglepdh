#include <iostream>
#include <string>
#include <vector>
using namespace std;
string check(string str){
  int temp = 0;
  for(int j = 0;j<str.size();j++){
    if(str[j] == '('){
      temp += 1;
    }
    else if(str[j] == ')'){
      temp -= 1;
    }
    if (temp < 0) break;
  }
  if(temp == 0){
    return "YES";
  }
  else
    return "NO";
}
int main() {
  int n;
  cin >> n;
  for(int i = 0;i<n;i++){
    string s;
    cin >> s;
    cout << check(s) << '\n';
  }
  return 0;
}