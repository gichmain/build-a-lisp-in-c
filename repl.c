#include <stdio.h>

char static input[2048];

int main(int argc, char** argv)
{
    puts("Lispy version 0.0.0.0.1");
    puts("press Ctl-C to exit \n");

    while(1)
    {
        fputs("Lispy>", stdout);
        fgets(input, 2048, stdin);
        printf("No you are %s", input);
    }
    return 0;
}