#include <stdio.h>
#include <string.h>
int main(){
	char peoples[] = "ABCD";	
	for(int i = 0; i < strlen(peoples);i++){
		char killer = peoples[i];
		int sum = (killer != 'A') + (killer == 'C') + (killer == 'D') +(killer != 'D');
		//printf("%d\n", sum);
		if(sum == 3){
			printf("%c is killer\n", killer);
			break;
		}	
	}
//	string hello = "dfdf";
//	printf("sizeof peoples is : %d\n", strlen(peoples));
	return 0;
}
