#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) {
    int answer = 0;
    for(int i =0;i<my_string.size();i++){
        string s = "";
        for(int j = i;j<is_prefix.size();j++){
            s += my_string[j];
        }
        if(s == is_prefix){
            return 1;
        }
    }
    return answer;
}