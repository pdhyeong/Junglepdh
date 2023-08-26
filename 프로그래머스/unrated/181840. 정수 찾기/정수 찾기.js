function solution(num_list, n) {
    var answer = 0;
    for(i of num_list){
        if(i == n && i % n == 0){
            return 1;
        }
    }
    return answer;
}