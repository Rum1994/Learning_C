#include <stdio.h>
#define MAXLINE 1000    /* maximum input line length */

int fetch(char line[], int max);
int strindex(char source[], char searchfor[]);

char pattern[] = "ould";    /* pattern to search for */

/* find all lines matching pattern */
int main()
{
    char line[MAXLINE];
    int found = 0;
int index = 0;
    while (fetch(line, MAXLINE) > 0)
        index =  strindex(line, pattern);
        if (strindex(line, pattern) >= 0) {
            printf("%d", index);
            found++;
        }
    return found;
}

/* getline:  get line into s, return length */
int fetch(char s[], int lim)
{
    int c, i;

    i = 0;
    while (--lim > 0 && (c=getchar()) != EOF && c != '\n'){
        s[i++] = c;
            if (c == '\n')
            {
                s[i++] = c;
        
            }  
    s[i] = '\0';
   
    }
     return i;
}

/* strindex:  return index of t in s, −1 if none */
int strindex(char s[], char t[])
{
    int i, j, k, index;
    index = -1;

    for (i = 0; s[i] != '\0'; i++) {
        for (j=i, k=0; t[k] != '\0' && s[j]==t[k]; j++, k++)
        ;
            
            if (k > 0 && t[k] == '\0')
            {
                index = i;
            }        
      
    }
   return index;
}