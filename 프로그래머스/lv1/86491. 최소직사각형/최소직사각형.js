function solution(sizes) {
    var answer = 0;
    minlist = [];
    maxlist = [];
    for(card of sizes){
        minlist.push(Math.min(card[0],card[1]));
        maxlist.push(Math.max(card[0],card[1]));
    };
    answer = Math.max.apply(null,maxlist) * Math.max.apply(null,minlist);
    return answer;
}