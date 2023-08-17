function solution(todo_list, finished) {
    var answer = [];
    finished.forEach((e,index) => {if(!e){answer.push(todo_list[index])}});
    return answer;
}