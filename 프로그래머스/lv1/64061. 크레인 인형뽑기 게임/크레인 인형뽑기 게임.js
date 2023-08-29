function solution(board, moves) {
    var answer = 0;
    var bucket = [];
    
    for(i of moves){
        for(let j = 0;j<board[i-1].length;j++){
            if(board[j][i-1] !== 0 && board[j][i-1] !== undefined){
                bucket.push(board[j][i-1]);
                if(bucket.length >=2 && board[j][i-1] === bucket[bucket.length-2]){
                    bucket.pop()
                    bucket.pop();
                    answer += 2;
                }
                board[j][i-1] = 0;
                break;
            }
        }
    }
    
    return answer;
}