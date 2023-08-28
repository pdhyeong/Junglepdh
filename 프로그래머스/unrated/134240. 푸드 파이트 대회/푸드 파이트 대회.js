function solution(food) {
    var answer = '';
    var sd = [];
    for (let i = 1;i<food.length;i++){
        answer += String(i).repeat(Math.floor(food[i]/2));
    }
    answer += '0';
    for (let i = food.length;i>0;i--){
        answer += String(i).repeat(Math.floor(food[i]/2));
    }
    return answer;
}