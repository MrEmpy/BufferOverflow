#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main() {
    setuid(0);
    setvbuf(stdout, NULL, _IONBF, 0);
    FILE* flag_f;
    char flag[32];
    char flagbuf[32];

    flag_f = fopen("flag.txt", "r");
    if (flag_f == NULL) {
        puts("The flag.txt file does not exist, please create it");
        return -1;
    }
    fgets(flag, sizeof(flag), flag_f);

    while (1) {
        printf("Put the flag: ");
        fgets(flagbuf, sizeof(flagbuf), stdin);
        if (strncmp(flagbuf, flag, sizeof(flag)) == 0) {
            printf("Correct flag!");
            return 0;
        }
        printf(flagbuf);
    }
}
