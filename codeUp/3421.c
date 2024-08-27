#include <stdio.h>
int main(){
    int n,count=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        count *= 2;
    }
    printf("%d",count - 1);

    return 0;
}