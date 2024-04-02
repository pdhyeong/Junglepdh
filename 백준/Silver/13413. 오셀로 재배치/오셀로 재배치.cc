#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        string s,cmp_s;
        cin >> s;
        cin >> cmp_s;
        int b = 0;
        int w = 0;
        for(int i = 0;i<n;i++){
            if(s[i] == cmp_s[i]){
                continue;
            }
            else{
                if(cmp_s[i] == 'B'){
                    b++;
                }
                else{
                    w++;
                }
            }
        }
        if(w >= b) cout << w << '\n';
        else cout << b << '\n';
    }
    return 0;
}