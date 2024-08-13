#include <stdio.h>

void s(int n, int x, int y) {
    if (n == 1) {
        // 중앙 별 하나를 출력
        if (x == 0 && y == 0) {
            printf("*");
        } else {
            printf(" ");
        }
        return;
    }

    int size = 4 * n - 3;

    // 상단 테두리
    if (x == 0 || x == size - 1) {
        printf("*");
    }
    // 좌우 테두리
    else if (y == 0 || y == size - 1) {
        printf("*");
    }
    // 내부 패턴
    else {
        if (x >= 2 && x < size - 2 && y >= 2 && y < size - 2) {
            s(n - 1, x - 2, y - 2);
        } else {
            printf(" ");
        }
    }
}

void p(int n, int x, int y) {
    int size = 4 * n - 3;

    // 출력 범위를 벗어났다면 종료
    if (x == size) {
        return;
    }

    // 한 줄의 끝에 도달하면 줄 바꿈 후 다음 줄로 이동
    if (y == size) {
        printf("\n");
        p(n, x + 1, 0);
        return;
    }
    // 현재 좌표에 대한 별 패턴 출력
    s(n, x, y);

    // 다음 칸으로 이동
    p(n, x, y + 1);
}

int main() {
    int n;
    scanf("%d", &n);

    p(n, 0, 0);

    return 0;
}
