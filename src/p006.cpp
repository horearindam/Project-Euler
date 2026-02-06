#include <bits/stdc++.h>
using namespace std;

static long long solve() {
    long long n = 100;

    long long sum = n * (n + 1) / 2;
    long long sumOfSquares = n * (n + 1) * (2 * n + 1) / 6;

    return sum * sum - sumOfSquares;
}

int main() {
    volatile auto result = solve();
    (void) result;
}
