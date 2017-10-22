#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    if (getpid() & 1)
        puts("Looks like an odd pid to me!");
    else
        puts("An even pid? How quaint!");
    return 0;
}

/* vim:set ts=4 sts=4 sw=4 et:*/
