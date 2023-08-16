function solution(a, b, n) {
    var answer = 0;
    let temp = 0;
    let mod = 0;
    let modsum = 0;
    while (n >= a){
        mod = n % a;
        n = Math.floor(n / a)*b;
        answer += n;
        n += mod;
    }
    return answer;
}