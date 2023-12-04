#include <iostream>
#include <vector>
#include <string>

using namespace std;
int triangle[31][31];
int main(){
    int r,c,w;
    cin >> r >> c >> w;
    triangle[1][1] = 1;
    triangle[2][1] = 1;
    triangle[2][2] = 1;
    // 1 1 =            1
    // 2 1    2  2 =  1   1
    // 31  32 33     1  2  1


    for(int i = 3;i<31;i++){
        for(int j = 1;j<=i;j++){
            if(j == 1 || j == i){
                triangle[i][j] = 1;
            }
            else{
                triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
            }
        }
    }

    int sum = 0;
    int ls = 1;
    for(int i = r;i < r + w;i++){
        int count = c;
        for(int j = c;j<ls+c;j++){
            sum += triangle[i][j];
        }
        if(ls < w){
            ls++;
        }
    }
    cout << sum;
    return 0;
}