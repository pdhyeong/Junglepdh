#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

 
int main(){
    string s;
    cin >> s;
    int check = 0;
    string answer = "";

    for(int i = 0;i<s.length();i++){
        bool flag = false;
        if(s[i] == 'X'){
            check++;
        }
        else{
            while(check > 0){
                if(check >= 4){
                    answer += "AAAA";
                    check -= 4;
                }
                else if(check >= 2){
                    answer += "BB";
                    check-=2;
                }
                else if(check >= 1){
                    check -= 1;
                    flag = true;
                }
            }
            answer+=".";
        }
        if(flag){
            answer = "-1";
            break;
        }
    }
    if(check % 2 == 1){
        answer = "-1";
    }
    else {
        while(check > 0){
            if(check >= 4){
                answer += "AAAA";
                check -= 4;
            }
            else if(check >= 2){
                answer += "BB";
                check-=2;
            }
            else if(check >= 1){
                check -= 1;
            }
        }
    }
    cout << answer;
    return 0;
}
