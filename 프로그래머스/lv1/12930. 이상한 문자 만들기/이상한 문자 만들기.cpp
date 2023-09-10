#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int point = 0;
    for(int i = 0;i<s.size();i++){
        if(s[i] == ' ') {
            point = 0;
            continue;
        }
        if(!(point & 1)){
            if(s[i] >= 'a' && s[i] <= 'z'){
                s[i] -= 32;
            }
        }
        else{
            if(s[i] >= 'A' && s[i] <= 'Z'){
                s[i] += 32;
            }
        }
        point++;
    }
    return s;
}