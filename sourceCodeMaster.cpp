#include <iostream>

#include "sourceCodeMaster.h"

void scSubroutinePlus1(int &val) {

    printf("RUN scSubroutinePlus1\n");

    val = val + 1;
}

void scSubroutineMinus1(int &val) {

    printf("RUN scSubroutineMinus1\n");

    val = val - 1;
}

void scSubroutinePlusVar(int &val, int var) {

    printf("RUN scSubroutinePlusVar\n");

    val = val + var;
}

void scSubroutineMinusVar(int &val, int var) {

    printf("RUN scSubroutineMinusVar\n");

    val = val - var;
}
