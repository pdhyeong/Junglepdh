function solution(N, stages) {
    var answer = [];
    var remain = stages.length;
    var sl = [];
    for(let i = 1;i<=N;i++){
        var count = 0;
        for(let j = 0;j<stages.length;j++){
            if(i === stages[j]){
                count += 1;
            }
        }
        sl.push([count/remain,i]);
        remain -= count;
    }
    sl.sort((a,b) => b[0] - a[0]);
    sl.forEach(e => {
        answer.push(e[1]);
    })
    return answer;
}