#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
string exchange_bin(char c){
    // 귀찮으니까.... 하드 코딩 각?
    if(c == '1'){
        return "001";
    }
    else if(c == '2'){
        return "010";
    }
    else if(c == '3'){
        return "011";
    }
    else if(c == '4'){
        return "100";
    }
    else if(c == '5'){
        return "101";
    }
    else if(c == '6'){
        return "110";
    }
    else if(c == '7'){
        return "111";
    }
    return "000";
}
int main(){
    string s;
    cin >> s;
    string result = "";
    for(int i = 0;i<s.length();i++){
        result += exchange_bin(s[i]);
    }
    while(result[0] == '0'){
        result.erase(0,1);
        if(result.length() == 1){
            break;
        }
    }
    cout << result;
    return 0;
}