function solution(sequence, k) {
    let answer = [];
    let sum = 0;
    let trace = 0;
    let interval = sequence.length;
    for(let i = 0 ;i<sequence.length;i++){
        sum += sequence[i];
        while(sum > k){
            sum -= sequence[trace++];
        }
        if(sum === k){
            answer.push([trace,i]);
        }
    }
    console.log(answer);
    let min = 100000
    let savevalue = 0;
    for(let i = 0;i<answer.length;i++){
        if(answer[i][1] - answer[i][0] < min){
            min = answer[i][1] - answer[i][0];
            savevalue = i;
        }
    }
    return answer[savevalue];
}