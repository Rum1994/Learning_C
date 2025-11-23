#include <stdio.h>

#define TABSTOP 10


int main()
{
    char line[TABSTOP];
    int current_index = 0;
    int c;
    while ((c = getchar()) != EOF){
        putchar(c);
        ++current_index;
        if ( current_index == 10){
            putchar('\n');
            current_index=0;
        }
   
    }

    return 0;
}