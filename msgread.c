#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUFFER_SIZE 512

void read_message() {
    char buffer[BUFFER_SIZE];
    int index = 0;

    // AT command to access phones message
    printf("Sending AT command to read incoming messages...\n");
    system("AT+CMGF=1"); // Set message format to text mode
    system("AT+CNMI=2,2,0,0,0"); // Set new message notifications terminal equipment
    system("AT+CMGL=\"ALL\""); // List all messages in text mode

    // Reading incoming messages
    printf("Reading incoming messages...\n");
    while (1) {
        char c = getchar();
        buffer[index++] = c;
        if (index >= BUFFER_SIZE - 1) {
            buffer[index] = '\0';
            printf("%s", buffer);
            index = 0;
        }
        if (strstr(buffer, "OK") != NULL) {
            break;
        }
    }
  //parsing it into logical components
    printf("Parsing incoming messages...\n");

}

int main() {

    read_message();

    return 0;
}
