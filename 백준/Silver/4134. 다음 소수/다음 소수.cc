#include <iostream>
#include <cmath>

bool isPrime(long long x) {
    if (x == 0 || x == 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(x); ++i) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int T;
    std::cin >> T;

    for (int t = 0; t < T; ++t) {
        long long n;
        std::cin >> n;

        while (true) {
            if (isPrime(n)) {
                std::cout << n << '\n';
                break;
            } else {
                ++n;
            }
        }
    }

    return 0;
}
