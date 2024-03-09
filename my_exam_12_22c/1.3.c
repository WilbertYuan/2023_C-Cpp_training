#include <stdio.h>  

int catalan(int n) {
    if (n == 1 || n == 0)  return 2;
    else
    {
        return catalan(n - 1) + catalan(n - 2);
    }
}

int main() {
    int n = 5;
    printf("%d\n",catalan(n));
    return 0;
}
