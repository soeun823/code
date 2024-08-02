#include <stdio.h>
int main(){
    int n,a[1000],b[1000];

    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        scanf("%d %d",&a[i],&b[i]);
    }
        for(int i = 0;i<n;i++){
            printf("Case #%d: %d\n",i+1,a[i]+b[i]);
    }
    return 0;
}