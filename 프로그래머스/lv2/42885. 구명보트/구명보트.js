function solution(people, limit) {
    var answer = 0;
    people.sort((a,b) => a-b);
    var start = 0;
    var end = people.length-1;
    while(start <= end){
        if(limit >= people[start] + people[end]){
            start++;
            end--;
        }
        else{
            end--;
        }
        answer += 1;
    }
    return answer;
}