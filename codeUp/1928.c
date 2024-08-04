#include <stdio.h>

void col(int n){
    printf("%d\n",n);
    if(n == 1) return ;

    if(n%2) col(3*n + 1);

    else col(n / 2);
}

int main(){
    int n;
    scanf("%d",&n);
    col(n);

    return 0;
}