function solution(cards1, cards2, goal) {
    var answer = '';
    var one = 0;
    var two = 0;
    var len = 0;
    while(one + two < goal.length){
        if(goal[len] === cards1[one]){
            one += 1;
        }
        else if(goal[len] === cards2[two]){
            two += 1;
        }
        else{
            return "No";
            break;
        }
        len += 1;
    }
    return "Yes";
}