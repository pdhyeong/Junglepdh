#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> answers) {
	vector<int> result;

    int one[5] = {1, 2, 3, 4, 5};
    int two[8] = {2, 1, 2, 3, 2, 4, 2, 5};
    int three[10] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};

    vector<int> score(3,0);

    for (size_t i = 0; i < answers.size(); ++i) {
        if (one[i % 5] == answers[i]) {
            score[0] += 1;
        }
        if (two[i % 8] == answers[i]) {
            score[1] += 1;
        }
        if (three[i % 10] == answers[i]) {
            score[2] += 1;
        }
    }

    for (size_t i = 0; i < score.size(); ++i) {
        if (*max_element(score.begin(), score.end()) == score[i]) {
            result.push_back(i + 1);
        }
    }

    return result;
}