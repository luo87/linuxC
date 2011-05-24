#include <stdio.h>
#include <string.h>

int main(){
	int A, B, C, D, E;
	int i, j, k, l, m;
	for (i = 1; i <= 5;i++){
		A = i;
		for (j = 1; j <= 5;j++){
			if (j == i){
				continue;
			}
			B = j;
			for (k = 1; k <= 5;k++){
				if (k == i || k == j){
					continue;
				}
				C = k;
				for (l = 1; l <= 5;l++){
					if (l == i || l == j || l == k){
						continue;
					}
					D = l;
					for (m = 1; m <= 5;m++){
						if (m == i || m == j || m == k || m == l){
							continue;
						}
						E = m;
						//printf("%d%d%d%d%d\n", A, B, C, D, E);
						if ( (B==1) + (A==3) == 1 && (B==2) + (E==4) == 1 && (C==1) + (D==2) == 1 && (C==5) + (D==3) == 1 && (E==4) + (A==1) == 1 ){
						printf("%d%d%d%d%d\n", A, B, C, D, E);
						}
					}	
				}	
			}	
		}	
	}	
}
