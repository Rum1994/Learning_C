#include <ctype.h>
#include <stdio.h>
int htoi(char s[]);

int main(){
 printf("the value is %d/n", htoi("F"));

return 0;
}
int htoi(char s[]) {
    int i = 0;
    int total = 0;
    int digit;

    // Skip optional 0x or 0X
    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X'))
        i = 2;

    for (; s[i] != '\0'; i++) {
        if (s[i] >= '0' && s[i] <= '9')
            digit = s[i] - '0';
        else if (tolower(s[i]) >= 'a' && tolower(s[i]) <= 'f')
            digit = tolower(s[i]) - 'a' + 10;
        else
            break;  // stop on invalid character

        total = total * 16 + digit;  // accumulate left-to-right
    }

    return total;
}