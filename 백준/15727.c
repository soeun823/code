#include <stdio.h>
int main(){
    int l,t;

    scanf("%d",&l);
    printf("%d",l%5 ? l/5 + 1 : l/5);
}