
#include <stdio.h>

void escape(char t[], char s[])
{
    
   int i,j=0;

    for (i = 0; t[i] != '\0'; i++ ){
        switch (t[i]) {
            case '\n': s[j] = '\\'; 
                    j++ ;
                     s[j] = 'n';
                     break;
            case '\t': s[j] = '\\';
                    j++ ;
                    s[j] = 't';
                    break;
            default : s[j] = t[i];  
                    j++;
                    break;                

        }
    }
    s[j] = '\0';
}

int main() {
    char t[] = "Hello\nWorld\t!";
    char s[100];

    escape(t, s);

    printf("Original: %s\n", t);
    printf("Escaped:  %s\n", s);

    return 0;
}