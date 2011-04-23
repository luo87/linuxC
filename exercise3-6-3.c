#include <stdio.h>

int main(){
	int i = 0;
	while(i <= 10000){
		if(i%2 == 1 && i%3 ==2 && i%5==4 && i%6 ==5 && i%7 == 0){
			printf("got it %d\n", i);
			break;
		}
		i++;
	}
	return 0;
}
