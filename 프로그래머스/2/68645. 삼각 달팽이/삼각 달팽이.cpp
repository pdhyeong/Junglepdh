#include <string>
#include <vector>
#include <iostream>
using namespace std;
int arr[1001][1001];
// 밑변의 길이와 높이가 n인 삼각형에서 맨 위 꼭짓점부터 반시계 방향으로 달팽이 채우기 진행
vector<int> solution(int n) {
    vector<int> answer;
    int total = 0;
    if(n&1){
        total = (n/2)*(n+1) + ((n+1)/2);
    }
    else{
        total = (n/2)*(n+1);
    }
    int count = 1;
    int i = 0;
    int j = 0;
    while(count <= total){
        while(i < n && !arr[i][j]){
            arr[i++][j] = count++;
        }
        i--; j++;
        while(j < n && !arr[i][j]){
            arr[i][j++] = count++;
        }
        i--;j-=2;
        while(i > 0 && j > 0 && !arr[i][j]){
            arr[i--][j--] = count++;
        }
        i += 2; j++;
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(arr[i][j] == 0){
                continue;
            }
            answer.push_back(arr[i][j]);
        }
    }
    return answer;
}