#include <stdio.h>

// 두 점 사이의 거리의 제곱을 계산하는 함수
int distance(int x1, int y1, int x2, int y2) {
    return (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
}

int main() {
    int T, s[2][4], pt[10000] = {};
    scanf("%d", &T); // 테스트 케이스 개수 T 입력 받기

    for (int i = 0; i < T; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d %d", &s[0][j], &s[1][j]);
        }

        int d[6];
        int index = 0;

        // 모든 점 사이의 거리의 제곱을 계산
        for (int j = 0; j < 4; j++) {
            for (int k = j + 1; k < 4; k++) {
                d[index++] = distance(s[0][j], s[1][j], s[0][k], s[1][k]);
            }
        }

        // 거리를 정렬하여 네 변과 두 대각선이 맞는지 확인
        for (int j = 0; j < 6; j++) {
            for (int k = j + 1; k < 6; k++) {
                if (d[j] > d[k]) {
                    int temp = d[j];
                    d[j] = d[k];
                    d[k] = temp;
                }
            }
        }

        // 네 변의 길이의 제곱이 같고, 두 대각선의 길이의 제곱이 같은지 확인
        if (d[0] == d[1] && d[1] == d[2] && d[2] == d[3] && d[4] == d[5]) {
            pt[i] = 1;
        } else {
            pt[i] = 0;
        }
    }

    for (int i = 0; i < T; i++) {
        printf("%d\n", pt[i]);
    }

    return 0;
}
