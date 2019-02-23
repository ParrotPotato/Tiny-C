#include <stdio.h>
#include <stdlib.h>

// typedefing the INT

typedef int Integer;


/*  a function to get the n the fibo Number 
    And this is a multiple line comment 
    to check the code 
*/
int fibo(int n){
    if(n <= 1)
        return 1;
    return fibo(n-1) + fibo(n-2);
}

int main(int argc, char[][]argv){
    int number;

    printf("Enter the Number : ");
    scanf("%d",&number);

    if(number < 0){
        printf("Smaller then 0 numbers not allowed\a");
        return 1;
    }
    else if(number > 0){
        printf("The fiboNumber is : %d", fibo(number));

        float floatingNumber = 10.2341;
        float floatingexponumber = 10e231;
        float floatingexponumber2 = 10e-231;
        float floatingexponumber3 = 10E+231;
        float floatingexponumber4 = 10E-231;

        char character_const = 'c';

        Integer int_number = 23;

    }

    long value = fibo(number) * fiboNumber(number + 1 );

    double tt = 23.;
    testing = .23;
    float test = 23e+10;

    test += test + 2;
    number <= 2;
    number >= 3;

    number++;
    number--;
    
    number > 10 ? number++ : number--;
    number = number%10;

    number << 3;
    number >> 3;



    /* This code is not made to run in C programming language 
    This is just to test the lexer 
    */

    char characterconstant = 'a';
    char escapesequences[] = {'\a','\b','\f','\n','\r','\t','\v'};

    // Testing punctuation

    [ ] ( ) { } . -> / % << >> < > <= >= == != ^ | && ||
    ++ -- & * + - ~ !
    
    ? : ; ...
    = *= /= %= += -= <<= >>= &= ^= |=
    , #

    // Testing keyword
    auto test;
    enum {
        TIME
    }
    restrict 
    unsigned int testing3;
    break ;
    extern ;
    case 
    float 
    short 
    volatile
    char 
    for 
    signed 
    while
    const 
    goto 
    sizeof 
    _Bool
    continue 
    if 
    static 
    _Complex
    default 
    inline 
    struct 
    _Imaginary
    switch
    typedef
    register 
    union

    return 0;
    
}