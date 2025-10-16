#include <iostream>
#include <math.h>

#include "sourceCodeFuture.h"

void scSubroutineMult2(int &val) {

    printf("RUN scSubroutineMutl2\n");

    val = val * 2;
}

void scSubroutineDev2(int &val) {

    printf("RUN scSubroutineDev2\n");

    val = val / 2;
}

void scSubroutinePow2(int &val) {

    printf("RUN scSubroutinePow2\n");

    val = val * val;
}

void scSubroutineSqrt(int &val) {

    printf("RUN scSubroutineSqrt\n");

    val = (int)sqrt((double)val);
}
