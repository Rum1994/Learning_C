#include <stdio.h>

#define TABSTOP 8


int main()
{
    int current_index = 0;
    int c;
    int spaces_to_jump;
    while ((c = getchar()) != EOF){
    
        if (c == '\t'){
            spaces_to_jump = TABSTOP - (current_index % TABSTOP);
            current_index = spaces_to_jump + current_index;
                
            for (int i = 0; i < spaces_to_jump; ++i){
                putchar(' ');

    }
        } else if (c == '\n'){
            
            current_index = 0;
        } else {
              putchar(c);
                
              ++current_index;
        }
    }
    return 0;
}