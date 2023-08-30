function solution(phone_book) {
    var answer = true;
    phone_book.sort();
    for(let i = 1;i<phone_book.length;i++){
        var check = phone_book[i].startsWith(phone_book[i-1]);
        if(check) {
            return false;
        }
    }
    return answer;
}