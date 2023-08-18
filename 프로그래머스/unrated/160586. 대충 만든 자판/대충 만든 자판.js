function solution(keymap, targets) {
    var answer = [];
    targets.forEach((e) => {
        var sum = 0;
        var flag = false;
        for(i in e){
            var min = 10000;
            for(j in keymap){
                var key = keymap[j].indexOf(e[i]) + 1;
                if(key !== 0){
                    min = Math.min(min,key);
                }
            }
            if(min === 10000){
                flag = true;
                break;
            }
            sum += min;
        }
        if(flag){
            answer.push(-1);
        }
        else{
            answer.push(sum);
        }
    })
    return answer;
}