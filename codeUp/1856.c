#include <stdio.h>
int up(int n) {
    if(n<1) return 0;
    else if(n==1) return 1;
    else return up(n-1) + up(n-2) + up(n-3);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",up(n+1));
    return 0;
}
