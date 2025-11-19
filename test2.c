#include <stdio.h>

int main()
{
    int c;
    char ndigit[1000];

    long nc;

    nc = 0;

    long nw = 0;
    while ((c = getchar()) != EOF)

     if (c != ' ' && c != '\n' && c != '\t'){
            ++nc;
            putchar('*');
     } else{ 
        if (nc>0){
            putchar('\n');
            nc = 0;
        }
    }
     if (nc>0)
     putchar('\n');

     return 0;
     

}