#include <stdio.h>

int count = 0;

void dfs(int arr[], int N, int S, int i, int sum) {
    if (i == N) {
        return;
    }
    
    sum += arr[i];
    if (sum == S) {
        count++;
    }
    
    dfs(arr, N, S, i + 1, sum); // 현재 원소를 포함하는 경우
    dfs(arr, N, S, i + 1, sum - arr[i]); // 현재 원소를 포함하지 않는 경우
}

int main() {
    int N, S,arr[100];
    
    // 첫 줄 입력 받기
    scanf("%d %d", &N, &S);
    
    // 두 번째 줄 입력 받기
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    // DFS 시작
    dfs(arr, N, S, 0, 0);
    
    // 결과 출력
    printf("%d\n", count);
    
    return 0;
}
