function solution(X, Y) {    
    let answer = [];
    let stack = [];
    
    for(let i = 0; i < X.length; i++){
        if(stack.includes(X[i])){
            continue;
        }
        
        const yArr = Y.split(X[i]);
        if(yArr.length !== 1){
            const xArr = X.split(X[i]);
            
            const min = Math.min(xArr.length - 1, yArr.length - 1);
            
            answer.push(X[i].repeat(min));
        }
        
        stack.push(X[i]);
    }
    
    if(answer.length === 0){
        return "-1";
    }
    
    if(Number(answer.join("")) === 0){
        return "0";
    }
    
    answer = answer.join("").split("").sort((a,b) => b - a);
    
    return answer.join("");
}