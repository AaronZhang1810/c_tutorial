# include <stdio.h>

// main
int main(void) { // or main(); "void" means the function has no argument
    // declare integer variables that will enter later as inputs & output
    int no1;
    int no2;
    int sum;

    // prompt for inputs
    printf("enter the first number\n");
    scanf("%d",&no1); // %d is a format specifier for integer
    printf("enter the second number\n");
    scanf("%d",&no2);

    // output
    sum = no1 + no2;
    printf("the sum of %d and %d is %d\n",no1,no2,sum);
}
// end main