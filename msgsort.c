#include <stdio.h>
#include <string.h>

int main() {
    // we received an incoming message
    char message[300];

    printf("Enter the message:\n");
    gets(message);

    // work-related category
    if (strstr(message, "meeting") != NULL || strstr(message, "deadline") != NULL || strstr(message, "project") != NULL) {
        printf("This message belongs to the work-related category.\n");
    }
    // personal category
    else if (strstr(message, "birthday") != NULL || strstr(message, "wedding") != NULL || strstr(message, "travel") != NULL) {
        printf("This message belongs to the personal category.\n");
    }
    //promotions category
    else if (strstr(message, "sale") != NULL || strstr(message, "discount") != NULL || strstr(message, "offer") != NULL) {
        printf("This message belongs to the promotions category.\n");
    }
    //  spam category
    else if (strstr(message, "18+ adult content") != NULL || strstr(message, "urgent") != NULL || strstr(message, "make money") != NULL) {
        printf("This message belongs to the spam category.\n");
    }
    //a general category
    else {
        printf("This message belongs to the general category.\n");
    }

    return 0;
}
