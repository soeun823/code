#include <stdio.h>

#define MOD 100007

int k, n;
int memo[100001]; // n 번째 항을 저장할 메모이제이션 배열

// 메모이제이션을 위한 함수
int kFib(int idx, int init[]) {
    if (idx <= k) {
        return init[idx - 1] % MOD;
    }

    if (memo[idx] != -1) {
        return memo[idx];
    }

    // idx 번째 값을 구하기 위해 앞의 k개의 항을 더함
    memo[idx] = 0;
    for (int i = 1; i <= k; i++) {
        memo[idx] = (memo[idx] + kFib(idx - i, init)) % MOD;
    }

    return memo[idx];
}

int main() {
    // 입력 받기
    scanf("%d %d", &k, &n);

    int init[100]; // 초기 항들을 저장할 배열
    for (int i = 0; i < k; i++) {
        scanf("%d", &init[i]);
    }

    // memo 배열을 -1로 초기화 (아직 계산되지 않았음을 의미)
    for (int i = 0; i <= n; i++) {
        memo[i] = -1;
    }

    // n번째 항 계산 및 출력
    printf("%d\n", kFib(n, init));

    return 0;
}
