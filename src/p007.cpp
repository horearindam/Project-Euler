#include <bits/stdc++.h>
using namespace std;

static bool is_prime(long long n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

static long long solve() {
    int count = 1;
    long long candidate = 1;

    while (count < 10001) {
        candidate += 2;
        if (is_prime(candidate)) {
            ++count;
        }
    }

    return candidate;
}

int main() {
    volatile auto result = solve();
    (void) result;
}
