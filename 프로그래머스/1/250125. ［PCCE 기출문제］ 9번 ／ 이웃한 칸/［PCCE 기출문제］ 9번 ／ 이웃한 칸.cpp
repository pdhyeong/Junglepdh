#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<string>> board, int h, int w) {
    int answer = 0;
    string now = board[h][w];
    string h1;
    string h2;
    string w1;
    string w2;
    if(h-1 >= 0){
        h1 = board[h-1][w];
        if (h1 == now) answer++;
    }
    if(h + 1 < board.size()){
        h2 = board[h+1][w];
        if (h2 == now) answer++;
    }
    if(w-1 >= 0){
        w1 = board[h][w-1];
        if (w1 == now) answer++;
    }
    if(w + 1 < board.size()){
        w2 = board[h][w+1];
        if (w2 == now) answer++;
    }
    
    return answer;
}