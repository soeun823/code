#include <stdio.h>
int main(){
    int n,max=0, p[1001];
    double add =0;
    scanf("%d",&n);

    for(int i=0;i<n;i++){//최대값 구하기
        scanf("%d",&p[i]);
        if(p[i]>max) max = p[i];
    }
    
    for(int i=0;i<n;i++) add += (double)p[i] / max * 100; //모든 점수를 점수/max*100로 고치고 add에 넣기

    // printf("%d\n%f",max,add);
    printf("%g",add/n);
}