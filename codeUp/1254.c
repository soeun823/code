#include <stdio.h>
int main(){
    char first, last;
    scanf("%c %c",&first,&last);
    for(int i = first;i <= last;i++){
        printf("%c ",i);
    }
    return 0;
}