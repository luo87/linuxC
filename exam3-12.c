#include <stdio.h>
#include <time.h>

int main(){
	srand(time(NULL));
	int num = rand()%100 + 1;
	unsigned int i = 1;
	while(i <= 8){
		int input;
		scanf("%d", &input);
		if(input == num){
			printf("perfect,got it with %d times\n", i);
			break;
		}else if(input > num){
			printf("too high,%d times left!\n", 8 - i);
		}else{
			printf("too low,%d times left!\n", 8 - i);
		}
		i++;
		//display right number after 8 times
		if(i > 8 && input != num ){
			printf("sorry, you try too many times,the answer is %d !\n", num);
		}

	}	
}
