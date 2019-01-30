#include <stdio.h>

void call_n_times(int n)
{
    for(int i=0; i<n;i++)
    {
        puts("Hello world!");
    }
}

int main(int argc, char** argv)
{
    call_n_times(5);
    return 0;
}