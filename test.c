#include <stdio.h>

int main(){
	printf("hello, world!\n");
	int a[] = {1,2,3};
	printf("%x\n", a);
	a += 2;
	printf("%d\n", *a);
	return 0;
}
