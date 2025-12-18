#include <stdio.h>

void expand(char s1[], char s2[]);

int main(void){

   char s1[] = "a-l";
   char s2[100];
   expand (s1,s2);

   printf("%s\n" , s2
   );
   return 0;

}

void expand(char s1[], char s2[]){

   int c = 0;
   int j = 0;
   int i = 0;

     for (i = 0; s1[i] != '\0'; i++ ){
        if (s1[i + 1] == '-' && s1[i] >= 'a' && s1[i] <= 'z' && s1[i+2] >= 'a' && s1[i+2] <= 'z' && s1[i+2] != '\0') {
         for (c=s1[i]; c <= s1[i+2]; c++){
                s2[j] = c;
                j++;
               
         }
         i +=2;
        } else if (s1[i + 1] == '-' && s1[i] >= 'A' && s1[i] <= 'Z' && s1[i+2] >= 'A' && s1[i+2] <= 'Z' && s1[i+2] != '\0') {
            for (c=s1[i]; c <= s1[i+2]; c++){
                s2[j] = c;
                j++;
               
                                            }
         i +=2;
        } else if (s1[i + 1] == '-' && s1[i] >= '0' && s1[i] <= '9' && s1[i+2] >= '0' && s1[i+2] <= '9' && s1[i+2] != '\0') {
            for (c=s1[i]; c <= s1[i+2]; c++){
                s2[j] = c;
                j++;
               
                                            }
         i +=2;
        } else {
         s2[j] = s1[i];
         j++;
        }
     }
     s2[j] = '\0';
   
}