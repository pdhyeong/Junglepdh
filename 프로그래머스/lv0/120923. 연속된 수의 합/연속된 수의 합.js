function solution(num, total) {
    var answer = []
    var ans=0
    var cnt=0
    for(let i = 1;i<num;i++)
        cnt+=i

    var first = Number((total-cnt)/num)

    for(let i = 0;i<num;i++)
        answer.push(first+i)
    return answer
}