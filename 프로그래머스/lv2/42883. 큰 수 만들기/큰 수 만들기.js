function solution(number, k) {
    let answer = [];
    for(num of number){
        while (k > 0 && answer.length > 0 && answer[answer.length-1] < num){
            answer.pop()
            k -= 1
        }
        answer.push(num)
    }
    answer.splice(number.length - k, k);
    return answer.join('');
}