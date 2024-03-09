#include <stdio.h>

long long ori[1000000], l[1000000], r[1000000], n, a = 0;

long long max(long long a, long long b) {
    return (a > b) ? a : b;
}

int main() {
    scanf_s("%lld", &n);

    for (int i = 1; i <= n; i++) {
        scanf_s("%lld", &ori[i]);
    }

    for (int i = 1; i <= n; i++) {
        long long tmp = ori[i] + l[i - 1];

        if (tmp >= 0) {
            l[i] = tmp;
        }
        else {
            l[i] = 0;
        }
    }

    for (int i = n; i >= 1; i--) {
        long long tmp = ori[i] + r[i + 1];

        if (tmp >= 0) {
            r[i] = tmp;
        }
        else {
            r[i] = 0;
        }
    }

    for (int i = 1; i <= n; i++) {
        a = max(a, r[i]);
        a = max(a, l[i]);
    }

    printf("%lld", a);

    return 0;
}