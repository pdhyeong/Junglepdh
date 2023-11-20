#include <string>
#include <vector>
#include <iostream>
#include <set>
using namespace std;

int solution(vector<int> elements) {
    int answer = 0;
    vector<int> newel;
    set<int> myset;
    for(int i = 0;i<elements.size()*2-1;i++){
        newel.push_back(elements[i%elements.size()]);
    }
    for(int i = 0;i<elements.size();i++){
        int sum = 0;
        for(int j = i;j<elements.size()+i;j++){
            sum += newel[j];
            myset.insert(sum);
        }
    }
    return myset.size();
}