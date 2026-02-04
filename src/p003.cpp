#include <bits/stdc++.h>

using namespace std;

static long long solve() {
    long long n = 600851475143;
    long long largest = 0;

    while (n % 2 == 0) {
        largest = 2;
        n /= 2;
    }

    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            largest = i;
            n /= i;
        }
    }

    if (n > 1) {
        largest = n;
    }

    return largest;
}

int main() {
    volatile auto result = solve();
    (void) result;
}
