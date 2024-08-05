#include <stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    printf(a == 'n' || a == 'N' ? "Naver D2" : "Naver Whale" );

    return 0;
}