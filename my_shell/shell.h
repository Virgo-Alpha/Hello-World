#ifndef SHELL_H
#define SHELL_H

#include "source.h"

void print_prompt1(void);
void print_prompt2(void);
int  parse_and_execute(struct source_s *src);
char *read_cmd(void);

#endif