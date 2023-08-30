function solution(maps) {
    var answer = -1;
    var q = [];
    var dx = [1,-1,0,0];
    var dy = [0,0,1,-1];
    
    q.push(0,0,1);
    
    while(q.length > 0){
        var x = q.shift();
        var y = q.shift();
        var fee = q.shift();
        
        for(let i = 0;i<4;i++){
            var nx = x + dx[i];
            var ny = y + dy[i];
            if(nx === maps.length-1 && ny === maps[nx].length){
                return fee;
            }
            if(nx >= 0 && nx < maps.length && ny >= 0 && ny < maps[nx].length && maps[nx][ny] === 1){
                maps[nx][ny] = 0;
                q.push(nx,ny,fee + 1);
            }
        }
    }
    return answer;
}