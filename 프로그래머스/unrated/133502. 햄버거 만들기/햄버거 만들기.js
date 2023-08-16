function solution(ingredient) {
    var answer = 0;
    var li = [];
    
    for (let i = 0; i < ingredient.length;i++){
        li.push(ingredient[i]);
        if(li[li.length-1] == 1 && li[li.length-2] == 3 && li[li.length-3] == 2 && li[li.length-4] == 1){
            for(let i = 0;i<4;i++){
                li.splice(li.length-1,1);
            }
            answer++;
        }
    }
    return answer;
}