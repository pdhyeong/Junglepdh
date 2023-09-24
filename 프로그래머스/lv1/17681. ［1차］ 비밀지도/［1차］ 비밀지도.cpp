#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    vector<string> s1;
    vector<string> s2;
    for(int i = 0;i<arr1.size();i++){
        string s="";
        while(arr1[i] > 0){
            s += to_string(arr1[i] % 2);
            arr1[i] /= 2;
        }
        for(int i=s.size();i<n;i++){
            s += "0";
        }
        s1.push_back(s);
    }
    for(int i = 0;i<arr2.size();i++){
        string s="";
        while(arr2[i] > 0){
            s += to_string(arr2[i] % 2);
            arr2[i] /= 2;
        }
        for(int i=s.size();i<n;i++){
            s += "0";
        }
        s2.push_back(s);
    }
    vector<string> result;
    for(int i = 0;i<n;i++){
        string s="";
        for(int j = 0;j<s1.size();j++){
            if(s1[i][j] -'0' || s2[i][j] -'0'){
                s += "#";
            }
            else{
                s += " ";
            }
        }
        reverse(s.begin(),s.end());
        answer.push_back(s);
    }
    return answer;
}