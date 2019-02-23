#include "myl.h"

int main(){
    int i;
    float f;
    printStr("Enter Integer   : ");
    int x = readInt(&i);
    if(x == ERR){
        printStr("Error Occured while reading Int (Enter only digits)\nValue of integer set to 0\n");
    }
    printStr("Enter Float     : ");
    int y = readFlt(&f);
    if(y == ERR){
        printStr("Error Occured while reading Float (Enter only digits and decimal)\n Value of float set to 0.000000\n");
    }
    printStr("Entered Integer : ");
    printInt(i);
    printStr("\nEntered Float   : ");
    printFlt(f);
    printStr("\n");
    return 0;
}