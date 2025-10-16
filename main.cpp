// --- Comment ---

#include <iostream>

#include "sourceCodeMaster.h"
#include "sourceCodeFuture.h"

int main(void) {

    int value = 1234;

    printf("MAIN ==> VALUE = %8d\n", value);
    
    scSubroutinePlus1(value);

    printf("MAIN ==> VALUE = %8d\n", value);

    scSubroutineDev2(value);

    printf("MAIN ==> VALUE = %8d\n", value);

    scSubroutineMinus1(value);

    printf("MAIN ==> VALUE = %8d\n", value);

    scSubroutineMult2(value);

    printf("MAIN ==> VALUE = %8d\n", value);

    scSubroutinePlusVar(value, 4);

    printf("MAIN ==> VALUE = %8d\n", value);

    scSubroutineMinusVar(value, 4);

    printf("MAIN ==> VALUE = %8d\n", value);

    return 0;
}