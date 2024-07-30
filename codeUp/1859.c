#include <stdio.h> //재귀 복습

int main(){
    int num;
    scanf("%d",&num);
    space(num);

    return 0;
}

void space(int num){
    if(num<1) return ;
    space(num - 1);
    star(num);
    printf("\n");

}
void star(int num){
    if(num<1) return ;
    star(num - 1);
    printf("*");
    
}