function solution(k, score) {
    var answer = [];
    var li = [];
    for (data of score){
        li.push(data)
        li.sort((a,b) => {return b-a});
        li.splice(k);
        answer.push(li[li.length-1])
    }
    return answer;
}