#include <stdio.h>

void squeeze(char s[], char t[]);

int main()
{
 char str[] = "hello world";
 squeeze(str, "lo");
 printf("%s\n", str);
    return 0;
}

void squeeze(char s[], char t[])
{
    int i, j,k, found;
    k=0;

        for (i = 0; s[i]!='\0'; ++i){
            found = 0;
            for (j =0 ; t[j]!= '\0'; ++j)
            {
                if (s[i] == t[j])
                {
                    found = 1;
                    break;
                }
            }
            if(!found)
            {
                s[k] = s[i];
                k++;
            }
        }
    
   
    s[k] = '\0';
}