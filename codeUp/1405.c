#include <stdio.h>
int main(){
    int n,i,j,temp;
    scanf("%d",&n);

    int k[n];
    for(i=0;i<n;i++){
    scanf("%d", &k[i]);
    }


    for(i=0;i<n;i++){
    printf("%d ", k[i]);
    }

    puts("");
    for(i=0; i<n-1; i++){
    temp = k[0];
    for(j=0; j<n; j++){
        k[j] = k[j+1];
        if(j+1==n) k[j]=temp;
        printf("%d ", k[j]);
    }
    puts("");
    }

    return 0;
}
