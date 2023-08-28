function solution(citations) {
    var answer = 0;
    citations.sort((a,b) => b-a);
    citations.forEach((e,index) => {if(index + 1 <= e && e >= citations.length - (index+1)){answer = index+1;}});
    return answer;
}