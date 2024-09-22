#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
Launch with arguments <int> <operator (+, -, /, x, ^)> <int>
for the program to function properly
*/

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    int res = a * b;
    return a * b;
}

int power(int a, int b) {
    int res = 1;
    for (int i = 0; i < b; i++) {
        res = multiply(res, a);
    }
    return res;
}

int divide(int a, int b) {
    if (b == 0) {
        printf("Will not and can not divide by zero\n");
        exit(1);
    }
    return a / b;
}

int main(int argc, char **argv) {
    if (argc < 4) {
        printf("Wierd number of arguments passed\n");
        printf("Correct usage: <int> <operator (+, -, /, x, ^)> <int>\n");
        return -1;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[3]);
    char *operator = argv[2];
    int result;

    if (!strncmp(operator, "+", sizeof(char))) {
        result = add(a, b);
    } else if (!strncmp(operator, "-", sizeof(char))) {
        result = subtract(a, b);
    } else if (!strncmp(operator, "x", sizeof(char))) {
        result = multiply(a, b);
    } else if (!strncmp(operator, "/", sizeof(char))) {
        result = divide(a, b);
    } else if (!strncmp(operator, "^", sizeof(char))) {
        result = power(a, b);
    }

    printf("%d\n", result);

    return 0;
}