function solution(progresses, speeds) {
    var answer = [];
    var sequence = [];
    for(i in progresses){
        var remain = (99 - progresses[i]) / speeds[i];
        sequence.push(Math.floor(remain)+1);
    }
    var comp = 0;
    var cnt = 1;
    var dic = {};
    sequence.forEach((e)=> {
        if(comp < e){
            comp = Math.max(comp,e);
            cnt = 1;
        }
        else{
            cnt += 1;
        }
        dic[comp] = cnt;
    })

    for (const key in dic) {
        answer.push(dic[key]);
    }
    return answer;
}