#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

class Solution{
public:
    int basicSolution() {
        // 10000안에 존재하는 8의 숫자 구하기
        // ex) 8801은 2번 이고, 8881은 3번으로 친다.
        int num = 10000;
        int count = 0;
        for(int i = 1;i<=num;i++){
            string exchange_num = to_string(i);
            if (exchange_num.find("8") != string::npos) {
                for(int j = 0;j<exchange_num.length();j++){
                    if(exchange_num[j] == '8'){
                        count+=1;
                    }
                }
	        }
        }
        return count;
    }
    int mySolution() {
        int num = 9999;
        string exchange_num = to_string(num);
        return pow(10,(exchange_num.size()-1)) * exchange_num.size();
    }
};
int main() {
    Solution solution = Solution();
    int basic_answer = solution.basicSolution();
    int myanswer = solution.mySolution();
    cout << basic_answer << '\n';
    cout << myanswer << '\n';
    return 0;
}
