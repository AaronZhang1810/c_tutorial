# include <stdio.h>

// main
int main() { // or main(); "void" means the function has no argument
    // declare integer variables 
    int whole_number = 100;
    
    // declare floating variables
    float single_precision = 3.14;
    double double_precision = 3.1415926535;

    // declare character variables
    char letter = 'c'; // single quotes '' are for characters; double quotes "" are used for string literals

    // output
    printf("Integer: %d\n",whole_number);
    printf("Integer: %f\n",single_precision);
    printf("Integer: %lf\n",double_precision);
    printf("Integer: %c\n",letter);
    
    return 0;
}
// end main