#include <string>
#include <vector>
#include <iostream>
using namespace std;
int check_one(string s){
    int one = 0;
    for(int i = 0;i<s.size();i++){
        if(s[i] == '1'){
            one++;
        }
    }
    return one;
}
int check_n(int n){
    string s = "";
    while(n > 0){
        if(n & 1){
            s += "1";
        }
        else{
            s += "0";
        }
        n /= 2;
    }
    return check_one(s);
}
int solution(int n) {
    int init = check_n(n);
    int comp = 0;
    while(n++){
        comp = check_n(n);
        if(comp == init){
            break;
        }
    }
    return n;
}