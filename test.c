#include <stdio.h>

int main(){
	printf("hello, world!\n");
	int a[] = {1,2,3};
	printf("%x\n", a);
	int *p1 = a;
	printf("%x\n", p1);
	printf("%d\n", sizeof(a));
	//a = a + 4;
	printf("%x\n", &a[0]);
	return 0;
}
