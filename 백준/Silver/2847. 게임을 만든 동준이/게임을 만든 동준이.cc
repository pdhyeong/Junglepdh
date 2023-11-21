#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> game;
    int answer = 0;
    for(int i = 0;i<n;i++){
        int k;
        cin >> k;
        game.push_back(k);
    }
    for(int i = game.size()-1;i>0;i--){
        if(game[i] <= game[i-1]){
            answer += game[i-1] - (game[i] - 1);
            game[i-1] = game[i] - 1;
        }
    }
    cout << answer << '\n';
    return 0;
}