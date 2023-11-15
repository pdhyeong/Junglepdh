#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    multiset<string> ms, tmp;
    int answer = 0;

    for(int i = 0; i < want.size(); i++) {
        for(int j = 0; j < number[i]; j++) {
            ms.insert(want[i]);
        }
    }

    for(int i = 0; i < discount.size() - 9; i++) {
        tmp = ms;
        for(int j = 0; j < 10; j++) {
            multiset<string>::iterator it = tmp.find(discount[i+j]);
            if(it != tmp.end()) {
                tmp.erase(it);
            }
        }
        if(tmp.empty()) answer++;
    }

    return answer;
}