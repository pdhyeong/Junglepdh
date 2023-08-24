function solution(want, number, discount) {
    var answer = 0;
    var list = {};
    for(let i = 0;i<discount.length-9;i++){
        var total = 0;
        var check = false;
        for(let i =0;i<want.length;i++){
            list[want[i]] = number[i];
        }
        for(let j = i;j<i+10;j++){
            if(list.hasOwnProperty(discount[j])){
                list[discount[j]] -= 1;
            }
        }
        for(const key in list){
            if(list[key] !== 0){
                check = true;
                break;
            }
        }
        if(!check){
            answer++;
        }
    }
    return answer;
}