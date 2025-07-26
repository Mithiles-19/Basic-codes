#include <stdio.h>
int main(){
	int number;
	printf("Enter a number:");
	scanf("%d",&number);
	int sq= number*number*number;
	printf("The cube of the given number is = %d\n",sq);
	return 0;
}
