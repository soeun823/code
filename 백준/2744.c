#include <stdio.h>
int main(){
    char str[100];
    scanf("%s",str);
    for(int i =0 ;str[i]!='\0';i++){
        str[i] += ( str[i] >= 'a' && str[i] <= 'z'? -32:  + 32);
    }
    printf("%s",str);

    return 0;
}