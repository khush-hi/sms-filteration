#include <stdio.h>
#include <string.h>

#define MAX_MESSAGES 3

struct Message {
    char sender[50];
    char receiver[50];
    char content[500];
};

struct Message messages[MAX_MESSAGES];
int num_messages = 0;

void add_message() {
    struct Message message;

    printf("Enter sender's name: ");
    scanf("%s", message.sender);

    printf("Enter receiver's name: ");
    scanf("%s", message.receiver);

    printf("Enter message content: ");
    getchar();
    // consume newline character from previous scanf
    fgets(message.content, sizeof(message.content), stdin);

    messages[num_messages] = message;
    num_messages++;
}

void list_messages() {
    printf("Messages:\n");
    for (int i = 0; i < num_messages; i++) {
        printf("Sender: %s\n", messages[i].sender);
        printf("Receiver: %s\n", messages[i].receiver);
        printf("Content: %s\n", messages[i].content);
        printf("\n");
    }
}

int main() {
    int choice;

    do {
        printf("1. Add message\n");
        printf("2. List messages\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_message();
                break;
            case 2:
                list_messages();
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 3);

    return 0;
}
