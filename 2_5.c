#include <stdio.h>

int any(char s[], char t[]);

int main()
{
 char str[] = "hello world";
 char s2[] = "zxc";
 int idx = any(str,s2);
 printf("%d\n", idx);
    return 0;
}

int any(char s[], char t[])
{
    int i, j,k, found;


        for (i = 0; s[i]!='\0'; ++i){
            found = 0;
            for (j =0 ; t[j]!= '\0'; ++j)
            {
                if (s[i] == t[j])
                {
                   
                   return i;
                }
            }
        
        }
    
   return -1;
   
}