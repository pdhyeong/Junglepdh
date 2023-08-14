function solution(k, tangerine) {
    var answer = 0;
    var fre = {};
    var list = []
    for(let i =0;i < tangerine.length;i++){
        if (fre[tangerine[i]] == null){
            fre[tangerine[i]] = 1
        }
        else{
            fre[tangerine[i]] = fre[tangerine[i]] + 1
        }
    }
    for (const value of Object.values(fre)) {
        list.push(value);
    }
    list.sort((a,b) => b - a);
    for(let i = 0;i < list.length ;i++) {
        k -= list[i];
        answer++;
        if(k <= 0){
            break;
        }
    }
    return answer;
}