#include <stdio.h>

int main() {
    int num, i;

    printf("Enter the number: ");
    scanf("%d", &num);
    if(num%5==0&&num%11==0){
    	printf("it is divisible");
    
	}
	else{
		printf("IT IS NOT DIVISIBLE");
	}
}
