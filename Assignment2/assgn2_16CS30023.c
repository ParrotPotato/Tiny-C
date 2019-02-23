#include "myl.h"

#define BUFF 100


int printStr(char * x){
    
    int bytes = 0  ;

    // getting the length of string (checking '\0')
    while(x[bytes] != '\0')bytes++;
    bytes = bytes + 1 ;

    // printing the string (x) of mentioned size (bytes)
    __asm__ __volatile__ (
        "movl $1, %%eax \n\t"
        "movq $1, %%rdi \n\t"
        "syscall"
        :
        :"S"(x), "d"(bytes)
    );

    return bytes;

}

int printInt(int x){

    char buffer[BUFF],zero = '0';
    int i=0 , j , k , bytes;

    // Loop to convert integer to character array 
    if(x == 0)buffer[i++] = zero;
    else{

    // checking if the value is negative 
        if(x < 0){
            buffer[i++] = '-';
            x = -x;
        }

    // taking each ones-digit and storing it in the array 
        while(x){
            int dig = x%10;
            buffer[i++] = (char)(zero + dig);
            x = x/10;
        }
        if(buffer[0] == '-') j = 1 ;
        else j = 0 ;
        k = i- 1 ; 

    // reversing the array as it stores the number in reverse order 
        while( j < k){
            char temp = buffer[j];
            buffer[j++] = buffer[k];
            buffer[k--] = temp;
        }
    }

    buffer[i] = '\0';
    bytes = i+1 ;

    // printing the string (buffer) of mentioned size (bytes)
    __asm__ __volatile__ (
        "movl $1, %%eax \n\t"
        "movq $1, %%rdi \n\t"
        "syscall"
        :
        :"S"(buffer), "d"(bytes)
    );
    
    return i+1;
}

int readInt(int * x){

    char buffer[BUFF];
    char zero = '0';
    char nine = '9';
    int bytes = BUFF;
    int i=0 ;
    int returnValue = OK;
    int value  = 0 ;

    // reading input as a character array (buffer) for maximum size (bytes)
    __asm__ __volatile__ (
        "movl $0, %%eax \n\t"
        "movq $1, %%rdi \n\t"
        "syscall"
        :
        :"S"(buffer), "d"(bytes)
    );
    bytes = 0 ;

    // calculating aray size and setting lst element as '\0'
    while(buffer[bytes] != '\0' && buffer[bytes] != '\n'){
        bytes++;
    }
    buffer[bytes] = '\0';

    // checking for negative  / positive sign and related error
    if(buffer[0] == '-')i=1;
    else if(buffer[0] == '+')i=1;
    if(i == 1 && buffer[i] == '\0'){
        *x = 0 ;
        return ERR;
    }
    // converting character array to integer value 
    while(buffer[i] != '\0'){
        if(buffer[i] >= zero && buffer[i] <= nine){
            value = value * 10 ;
            value += (int)(buffer[i] - zero);
            i++;
        }
    
    // error checking and returning ERR
        else{   
            returnValue = ERR;
            break;
        }
    }

    if(returnValue == ERR){
        *x = 0;
    }
    else {
    // updating according to sign
        if(buffer[0] == '-'){
            value = -value;    
        }
        *x = value;
    }
    return returnValue;
}

int readFlt(float * x){

    char buffer[BUFF];
    char zero = '0';
    char nine = '9';
    int bytes = BUFF;
    int i=0 ;
    int returnValue = OK;
    float value  = 0 ;
    float decimalFound = 0.000000000000000000f ; 

    // reading input as a character array (buffer) for maximum size (bytes)
    __asm__ __volatile__ (
        "movl $0, %%eax \n\t"
        "movq $1, %%rdi \n\t"
        "syscall"
        :
        :"S"(buffer), "d"(bytes)
    );
    bytes = 0 ;
    // calculating aray size and setting lst element as '\0'
    while(buffer[bytes] != '\0' && buffer[bytes] != '\n'){
        bytes++;
    }
    buffer[bytes] = '\0';

    // checking for negative  / positive sign
    if(buffer[0] == '-')i=1;
    else if(buffer[0] == '+')i=1;
    if(i == 1 && buffer[i] == '\0'){
        *x = 0 ;
        return ERR;
    }

    // converting character array to float value 
    while(buffer[i] != '\0'){
        if(buffer[i] == '.'){
            if(decimalFound == 0.000000000000000000f){
                decimalFound = 10 ; 
                i++;
                continue;
            }
            returnValue = ERR;
            break;
        }
        if(buffer[i] >= zero && buffer[i] <= nine){
            
            if(decimalFound == 0.000000000000000000f){
                value = value * 10 ;
                value += (int)(buffer[i] - zero);
            }
            else{
                int temp = (int)(buffer[i] - zero);
                float number  = (float)temp / decimalFound;
                value += number;
                decimalFound = decimalFound * 10 ;
            }
            i++;
        }
    // error checking and returning ERR
        else{
            returnValue = ERR;
            break;
        }
    }

    if(returnValue == ERR){
        *x = 0.000000;
    }
    else {
    // updating according to sign
        if(buffer[0] == '-'){
            value = -value;    
        }
        *x = value;
    }
    return returnValue;
}

int printFlt(float x){
    // seperating the integer and decimal part 
    int integer_part = (int)x;
    float decimal_part = x - integer_part;
    int returnValue = 0 ;

    // printing the integer part 
    printInt(integer_part);
    printStr(".");

    if(decimal_part < 0 ){
        decimal_part = -decimal_part;
    }
    
    // calculating number of digits in integer part
    while(integer_part){
        returnValue++;
        integer_part /= 10;
    }

    // setting the precision value to 6
    int prec = 6;

    char buffer[BUFF],zero = '0';
    int i=0  , bytes;

    // printing the decimal part upto the given presicion
    while(prec--){
        decimal_part = decimal_part * 10;
        int value = (int)(decimal_part);
        buffer[i] = (char)(zero + value);
        decimal_part = decimal_part - value;
        i++;
    }
    buffer[i] = '\0';

    bytes = i + 1;

    // printing the string (buffer) of mentioned size (bytes)
    __asm__ __volatile__ (
        "movl $1, %%eax \n\t"
        "movq $1, %%rdi \n\t"
        "syscall"
        :
        :"S"(buffer), "d"(bytes)
    );

    // calculating the returnValue (digits in integer part + precision + decimalpoint)
    returnValue = returnValue + bytes + 1 ; 
    return returnValue ; 
}