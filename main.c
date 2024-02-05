#include <stdio.h>

int main() {
    // Strings are a char vector
    // char == 8 bits

    char s[10];

    printf("Say something (conventional scanner)\n");
    scanf("%s", s);
    fflush(stdin);// clean keyboard

    printf("Result %s\n\n", s);


    printf("Say something else (appreciatory scanner)\n");
    scanf("%9[^\n]s", s);
    fflush(stdin);

    printf("Result %s\n\n", s);
    return 0;
}
