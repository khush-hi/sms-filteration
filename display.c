#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_MESSAGES 100
#define MAX_CATEGORIES 10
#define MAX_LENGTH 50

typedef struct {
    char category[MAX_LENGTH];
    char message[MAX_LENGTH];
} Message;

void display_messages_by_category(Message messages[], int num_messages, char category[]) {
    int i;
    printf("Messages in category '%s':\n", category);
    for (i = 0; i < num_messages; i++) {
        if (strcmp(messages[i].category, category) == 0) {
            printf("%s\n", messages[i].message);
        }
    }
}
