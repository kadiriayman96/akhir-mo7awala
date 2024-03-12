#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void crypter(char *message, int decalage) {
    int i;
    for (i = 0; i < strlen(message); i++) {
        if (message[i] >= 'A' && message[i] <= 'Z') {
            message[i] = ((message[i] - 'A' + decalage) % 26) + 'A';
        } else if (message[i] >= 'a' && message[i] <= 'z') {
            message[i] = ((message[i] - 'a' + decalage) % 26) + 'a';
        }
    }
}


int main() {
    char message[100];
    int decalage;

    printf("Entrez le message à crypter: ");
    fgets(message, sizeof(message), stdin);
    message[strcspn(message, "\n")] = '\0';

    printf("Entrez le décalage: ");
    scanf("%d", &decalage);

    crypter(message, decalage);
    printf("Message crypté: %s\n", message);



    return 0;
}
