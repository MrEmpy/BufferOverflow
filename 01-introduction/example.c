#include <stdio.h>

int main() {
    char message[] = "Very good";
    char buffer[8];
    puts("Write your message here: ");
    gets(buffer);
    printf("Overflow: %s\n", message);
    printf("Your message is: %s\n", buffer);
    return 0;
}