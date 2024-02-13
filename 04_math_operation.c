# include <stdio.h>

// main
int main() { // or main(); "void" means the function has no argument
    // declare integer variables 
    int a = 10;
    int b = 5;
    
    int remainder = a % b;

    a++; // this is equivalent to a = a + 1
    b--; // this is equivalent to b = b - 1

    // output
    printf("Remainder: %d\n",remainder);
    printf("Incremented a: %d\n",a);
    printf("decremented b: %d\n",b);

    return 0;
}
// end main