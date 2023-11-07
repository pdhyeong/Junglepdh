#include <string>
#include <vector>

using namespace std;
// 중앙에는 노란색 -> 나머지 테두리는 갈색
// 집으로 돌아와서 본 카펫의 노란색과 갈색으로 색칠된 격자 갯는 기억했지만 전체 카펫 크기가 기억이 안남
// Leo가 본 카펫에서 갈색격자 수는 brown 노란색 격자수는 yellow 일때
// 카펫 가로,세로 크기를 순서대로 넣으시오
vector<int> solution(int brown, int yellow) {
    vector<int> answer(2);
    // 세로
    int j,i;
    for(i = 1;i<=5000;i++){
        //가로
        bool flag = false;
        for(j = i;j<=5000;j++){
            if((2 * i) + (2 * j) - 4 == brown){
                flag = true;
                break;
            }
        }
        if(flag){
            if(i * j - brown == yellow){
                answer[0] = j;
                answer[1] = i;
            }
        }
    }
    return answer;
}