#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc - is the number of argument passed to program
 * @argv - is array of the arguments
 * 
 * Return - always 0
*/

int main(int argc, char *argv[]){
    printf("%s\n",*argv);

    return (0);
}