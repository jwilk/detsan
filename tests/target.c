#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    FILE *fp = fopen("/dev/urandom", "r");
    if (fp == NULL)
        abort();
    unsigned int v;
    size_t r = fread(&v, sizeof v, 1, fp);
    if (r != 1)
        abort();
    if (v & 1U)
        puts("Looks like an odd number to me!");
    else
        puts("An even number? How quaint!");
    fclose(fp);
    return 0;
}

/* vim:set ts=4 sts=4 sw=4 et:*/
