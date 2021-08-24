#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <stddef.h>
#include "shell.h" 

/**
 * print_prompt1: prints a prompt on the terminal
 * 
 * 
 * Return: nothing
 */

void print_prompt1(void)
{
    fprintf(stderr, "$ ");
}

void print_prompt2(void)
{
    fprintf(stderr, "> ");
}
