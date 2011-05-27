#include <stdio.h>

int main(){
	printf("hello, world!\n");
	int a[] = {1,2,3};
	printf("%x\n", a);
	int *p1 = a;
	printf("%x\n", p1);
	printf("%d\n", sizeof(a));
	a = a - 2;
	p1 = p1 + 2;
	printf("%x\n", &a[0]);
	printf("%d\n", *p1);
	return 0;
}
