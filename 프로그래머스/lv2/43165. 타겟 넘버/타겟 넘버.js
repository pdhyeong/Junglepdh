function solution(numbers, target){
    let answer = DFS(numbers, target, 0)
    return answer
}
function DFS(numbers, target, depth){
    let answer = 0
    if (depth === numbers.length){
        let sum = numbers.reduce((sum,value) => sum + value);
        if (sum === target)
            return 1
        else return 0
    }
    else{
        answer += DFS(numbers, target, depth+1)
        numbers[depth] *= -1
        answer += DFS(numbers, target, depth+1)
        return answer
    }
}