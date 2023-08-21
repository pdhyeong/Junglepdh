function solution(X, Y) {    
    var answer = [];
    var xdict = {};
    var ydict = {};
    for(xdata of X){
        if(xdict[xdata]){
            xdict[xdata] = xdict[xdata] + 1;
        }
        else{
            xdict[xdata] = 1;
        }
    }
    for(ydata of Y){
        if(ydict[ydata]){
            ydict[ydata] = ydict[ydata] + 1;
        }
        else{
            ydict[ydata] = 1;
        }
    }
    for (const key in xdict) {
        const value = Math.floor(Math.min(xdict[key],ydict[key]));
        if(value !== NaN){
            for(let i = 0;i<value;i++){
                answer.push(key);
            }
        }
    }
    answer.sort((a,b)=>b-a);
    if(answer.length === 0){
        return '-1';
    }
    else if(answer[0] === '0'){
        return '0';
    }
    return answer.join("");
}