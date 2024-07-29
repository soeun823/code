#include <stdio.h>
#include <string.h>

int main(){
    int num;
    char name[50][100], dir[100] = {0};  // dir 배열 초기화

    scanf("%d", &num);

    for(int i = 0; i < num; i++) {
        scanf("%s", name[i]);  // 각 문자열을 name[i]에 저장

        if(num == 1) {  // num이 1이면 바로 출력하고 끝내기
            printf("%s\n", name[0]);
            return 0;
        }

        if(i == 1) {  // 두번째부터 비교 시작
            for(int j = 0; name[0][j] != '\0'; j++) {
                if(name[0][j] == name[1][j]) dir[j] = name[0][j];
                else dir[j] = '?';
            }
        } else if(i > 1) {  // 세번째부터 비교
            for(int j = 0; dir[j] != '\0'; j++) {
                if(dir[j] != '?' && dir[j] != name[i][j]) dir[j] = '?';
            }
        }
    }

    printf("%s\n", dir);

    return 0;
}
