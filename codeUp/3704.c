#include <stdio.h>

int memo[100000] = {0,1,2,4};

int main() {
    int n;
    scanf("%d", &n);
    
    for(int i = 4; i <= n; i++) {
        memo[i] = (memo[i-1] + memo[i-2] + memo[i-3]) % 1000;
    }
    printf("%d", memo[n]);
    
    return 0;
}
