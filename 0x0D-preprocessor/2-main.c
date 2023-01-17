#include <stdio.h>
#include <string.h>

#define FILENAME (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__)

/**
* main: The main function of the program 
* Return - 
int main(void) {
    printf("%s\n", FILENAME);
    return 0;
}

