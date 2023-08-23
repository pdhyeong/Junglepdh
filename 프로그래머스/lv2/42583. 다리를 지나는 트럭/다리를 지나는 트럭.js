function solution(bridge_length, weight, truck_weights) {
    var answer = 0;
    var pass = 0;
    var ternel = [];
    var trp = 0;
    for(let i = 0;i<bridge_length;i++){
        ternel.push(0);
    }
    while(pass < truck_weights.length){
        var check = ternel.shift();
        answer++;
        if(check !== 0){
            pass++;
        }
        var result = ternel.reduce((sum,currvalue) => sum + currvalue);
        if(result+truck_weights[trp] <= weight){
            ternel.push(truck_weights[trp]);
            trp++;
        }
        else{
            ternel.push(0);
        }
    }
    return answer;
}