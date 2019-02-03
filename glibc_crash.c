// gcc -o glibc_crash glibc_crash.c
#include <stdio.h>
int main()
{
    puts(NULL);
    return 0;
}
