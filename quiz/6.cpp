#include <limits.h>
#include <stdio.h>

#define STRING "%15f = %s\n"
#define E_TYPE float
#define INITIAL (1.0f / 3)
#define FINAL 50
#define INC(E) ((E) *= 2)

typedef E_TYPE e_type;

void bitstr(char *str, const void *obj, size_t n);

int main(void)
{
e_type e;
char ebits[CHAR_BIT * sizeof e + 1];

puts("\n/* BEGIN output from bitstr.c */\n");
for (e = INITIAL; FINAL >= e; INC(e)) {
bitstr(ebits, &e, sizeof e);
printf(STRING, e, ebits);
}
puts("\n/* END output from bitstr.c */");
return 0;
}