#include <bits/stdc++.h>
using namespace std;

static long long solve() {
    const int LIMIT = 4'000'000;

    int prev = 1;
    int curr = 2;
    long long sum = 0;

    while (curr <= LIMIT) {
        if ((curr & 1) == 0) {
            sum += curr;
        }

        int next = prev + curr;
        prev = curr;
        curr = next;
    }

    return sum;
}

int main() {
    volatile auto result = solve();
    (void)result;
}
