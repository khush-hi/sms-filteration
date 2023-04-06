#include <stdio.h>

int main() {
    // link the phone to the message reading program
    char answer;
    printf("Do you want to link the phone to the message reading app? (Y/N)\n");
    scanf("%c", &answer);

    // user's response and ask for permission to access the phone's contacts and messages
    if (answer == 'Y' || answer == 'y') {
        char permission;
        printf("Do you give permission to access the phone's contacts and messages? (Y/N)\n");
        scanf(" %c", &permission);

        // Check the user's response and grant or deny permission accordingly
        if (permission == 'Y' || permission == 'y') {
            printf("Permission granted. Linking phone to the message reading app...\n");
            // Linked the phone
        } else {
            printf("Permission denied. Cannot link phone to the message reading app.\n");
            // Didn't link the phone
        }
    } else {
        printf("No action taken. Phone will not be linked to the message reading app.\n");
        // Do not link the phone
    }

    return 0;
}
