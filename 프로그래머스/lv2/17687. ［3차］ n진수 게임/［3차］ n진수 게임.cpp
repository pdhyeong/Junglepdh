#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string solution(int n, int t, int m, int p) {
    string answer = "";
    int turn = t * m;
    vector<int> vec;
    int start = 0;
    while(turn != start){
        vec.push_back(start);
        start++;
    }
    string result = "0";
    for(int i = 0;i<vec.size();i++){
        int cer = vec[i];
        string s = "";
        while(cer > 0){
            if(cer % n == 10){
                s += "A";
            }
            else if(cer % n == 11){
                s += "B";
            }
            else if(cer % n == 12){
                s += "C";
            }
            else if(cer % n == 13){
                s += "D";
            }
            else if(cer % n == 14){
                s += "E";
            }
            else if(cer % n == 15){
                s += "F";
            }
            else{
                s += to_string(cer % n);
            }
            cer /= n;
        }
        reverse(s.begin(),s.end());
        result += s;
    }
    for(int i = p-1;i<t * m;i+=m){
        answer+= result[i];
    }
    return answer;
}