#include <stdio.h>
int main(){
    long long int a,b;
    scanf("%lld %lld",&a,&b);
    printf("%lld",a-b >= 0? a-b:(a-b) * -1);

    return 0;
}