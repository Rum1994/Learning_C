#include <stdio.h>
#define MAXLINE 100    /* maximum input line size */

int getline(char line[], int maxline);
void copy(char to[], char from[]);
void reverse( char input [], int length);
/* print longest input line */
int main()
{
    int len;            /* current line length */
    int max;            /* maximum length seen so far */
    char line[MAXLINE];     /* current input line */
    char longest[MAXLINE];  /* longest line saved here */

   
    while ((len = getline(line, MAXLINE)) > 0){
  
        if (len > 0) {
        
                copy(longest, line);
                reverse(line,len);
              printf("%s", line);

        }
    
    }
    return 0;
   
}

/* getline:  read a line into s, return length */
int getline(char s[], int lim)
{
   int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;

    if (c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    return i;
}

void reverse(char inp [], int length){
   int i,j;
   char temp;
    
     if (inp[length-1] == '\n') {
        length--;  // ignore newline for reversal
    }
     for (i = 0, j = length-1; i < j; i++, j--) {
        temp = inp[i];
        inp[i] = inp[j];
        inp[j] = temp;
    }
}

/* copy:  copy ′from′ into ′to′; assume to is big enough */
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}