#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(int cacheSize, vector<string> cities) {
    int answer = 0;
    vector<string> st;
    for(int i = 0;i<cities.size();i++){
        transform(cities[i].begin(), cities[i].end(), cities[i].begin(), ::tolower);
    }
    for(int i = 0;i<cities.size();i++){
        bool hit = false;
        int j = 0;
        for (j = 0; j < st.size(); j++) {
            if (st[j] == cities[i]) {
                hit = true;
                break;
            }
        }
        st.push_back(cities[i]);
        if (hit) {
            st.erase(st.begin() + j);
            answer += 1;
        }
        else {
            if (st.size() > cacheSize) {
                st.erase(st.begin());
            }
            answer += 5;
        }
    }
    return answer;
}