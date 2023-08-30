function solution(progresses, speeds) {
    var answer = [];
    var sequence = [];
    for(i in progresses){
        var remain = (99 - progresses[i]) / speeds[i];
        sequence.push(Math.floor(remain)+1);
    }
    var comp = sequence[0];
    var cnt = 0;
    sequence.forEach((e)=> {
        if(comp < e){
            answer.push(cnt);
            comp = e;
            cnt = 1;
        }
        else{
            cnt += 1;
        }
    })
    answer.push(cnt);
    return answer;
}