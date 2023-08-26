function solution(n, k) {
    var answer = [];
    let ss = k;
    for(let i = 1;i<=Math.floor(n/k);i++){
        answer.push(i * k);
    }
    return answer;
}