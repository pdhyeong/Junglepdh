function solution(s){
    var answer = true;
    var cnt = 0;
    for(let i = 0;i<s.length;i++){
        if(s[i] === '('){
            cnt += 1;
        }
        else{
            cnt -= 1;
            if(cnt < 0){
               return false;
            }
        }
    }
    if(cnt !==0){
        return false;
    }
    return answer;
}