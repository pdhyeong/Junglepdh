#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s = "";
    int answer = 0;
    for(int i = n;i>=0;i--){
        int k = i;
        bool flag = false;
        while(k > 0){
            int tmp = k % 10;
            k /= 10;
            if(tmp == 4 || tmp == 7){
                flag = true;
            }
            else{
                flag = false;
                break;
            }
        }
        if(flag){
            answer = max(answer,i);
        }
    }
    cout << answer;
    return 0;
}