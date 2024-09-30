#include <stdio.h>

int main(){

    for(int i = 1 ;i<10;i++){
        printf("%d x %d = %2d\t%d x %d = %2d\t%d x %d = %2d\t%d x %d = %2d\n",2,i,i*2,3,i,i*3,4,i,i*4,5,i,i*5);
    }
    return 0;
}