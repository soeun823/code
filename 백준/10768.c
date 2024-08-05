#include <stdio.h>

int main(){
    int m,d;
    scanf("%d\n%d",&m,&d);

    printf( m == 2 ? (d == 18 ? "Special" : d <18 ? "Before" : "After") : m <2 ? "Before" : "After");

    return 0;
}