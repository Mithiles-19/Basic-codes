#include <stdio.h>

int main() {
    int num1 = 10;
    int num2 = 20;
    int num3 = 30;
    float average; 

    average = (float)(num1 + num2 + num3) / 3; 

    printf("The average of three numbers is: %.2f\n", average); 
    return 0;
}
