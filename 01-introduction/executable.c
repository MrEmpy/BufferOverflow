#include <stdio.h>

int main() {
    char buffer[32];
    int confirm = 0;
    puts("Write your message here: ");
    gets(buffer);

    if (confirm == 0) {
        printf("Your message is: %s\n", buffer);
        return -1;
    }

    puts("You managed to change the value of the confirm variable!\n");
    printf("Value: %d", confirm);
    return 0;
}