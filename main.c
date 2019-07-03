#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer = 0;
	int i;
	
	for(i=0;i<=100;i++){
		if((i%3==0)||(i%5==0)){
			answer = answer + i;
		}
	}
	
	printf("The answer is %d", &answer); 
	
	return 0;
}
