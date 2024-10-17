// #include <stdio.h>
// int up(int n) {
//     if(n<1) return 0;
//     else if(n==1) return 1;
//     else return up(n-1) + up(n-2) + up(n-3);
// }
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     printf("%d",up(n+1));
//     return 0;
// }

#include <stdio.h>

int memo[26] = {0,1,2,4};

int up(int n) {
    if(memo[n]) return memo[n];
    return memo[n] = up(n-1) + up(n-2) + up(n-3);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",up(n));
    return 0;
}
