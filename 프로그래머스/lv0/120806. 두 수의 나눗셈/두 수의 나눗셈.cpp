#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int num1, int num2) {
    double s = (float)num1 / (float)num2 * 1000;
    return (int) s;
}