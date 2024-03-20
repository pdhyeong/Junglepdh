#include <iostream>
#include <string>
#include <vector>

using namespace std;
bool checking_pal(string s){
    bool result = true;
    int end = s.size()-1;
    for(int i = 0;i<s.size()/2;i++){
        if(s[i] != s[end-i]){
            result = false;
        }
    }
    return result;
}
int main() {
    bool flag = true;
    while(flag){
        string s;
        cin >> s;
        if(s == "0"){
            break;
        }
        if(checking_pal(s)){
            cout << "yes\n";
        }
        else{
            cout << "no\n";
        }
    }
    return 0;
}