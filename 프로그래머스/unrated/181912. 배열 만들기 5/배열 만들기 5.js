function solution(intStrs, k, s, l) {
    var answer = [];
    for(data of intStrs){
        if(Number(data.substr(s,l)) > k){
            answer.push(Number(data.substr(s,l)));
        }
    }
    return answer;
}