#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer(2);
    int sum = 0;
    int count = 0;
    while(s!="1"){
        int bitcount = 0;
        for(int i = 0;i<s.size();i++){
            if(s[i] == '1'){
                bitcount++;
            }
        }
        sum += s.size() - bitcount;
        string a = "";
        while(bitcount > 0){
            if(bitcount & 1){
                a += '1';
            }
            else{
                a += '0';
            }
            bitcount /= 2;
        }
        s = a;
        count++;
    }
    answer[0] = count;
    answer[1] = sum;
    return answer;
}