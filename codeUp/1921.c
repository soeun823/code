#include <stdio.h>
void f(int n,int s)
{
    if(n == 0) return;
	else{
		f(n/s, s);
		printf("%X",n%s);
	}
}
int main() {
    int n,s;
	scanf("%d %d",&n,&s);
    f(n,s);

	return 0;
}
