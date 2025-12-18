#include <stdio.h>
#include <string.h>

void reverse(char s[]) {
    int i, j;
    char temp;
    for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}

void itob(int n, char s[], int b) {
    int i = 0;
    int sign = n;   
    int temp = n;


    do {
        int digit = temp % b;

    
        if (digit < 0)
            digit = -digit;


        if (digit < 10)
            s[i++] = '0' + digit;
        else
            s[i++] = 'A' + (digit - 10);

        temp /= b;
    } while (temp != 0);

   
    if (sign < 0 && b == 10)
        s[i++] = '-';

    s[i] = '\0';

  
    reverse(s);
}

int main() {
    char s[20];

    itob(255, s, 16);  // hexadecimal
    printf("%s\n", s); // prints "FF"

    itob(-255, s, 10); // decimal
    printf("%s\n", s); // prints "-255"

    itob(255, s, 2);   // binary
    printf("%s\n", s); // prints "11111111"

    return 0;
}
