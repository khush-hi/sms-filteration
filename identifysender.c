#include <stdio.h>
#include <string.h>
//according to phone number it will tell us about spam message
char* get_sender(char* message) {

    char* header_start = strstr(message, "From:");
    if (header_start == NULL) {

        return NULL;
    }


    char* phone_end = header_start + strlen("From:");
    while (*phone_end != '\0' && !isdigit(*phone_end)) {
        phone_end++;
    }
    if (*phone_end == '\0') {

        return NULL;
    }

    char* phone_start = phone_end;
    int phone_digits = 0;
    while (phone_digits < 10 && isdigit(*phone_end)) {
        phone_end++;
        phone_digits++;
    }
    if (phone_digits < 10) {

        return NULL;
    }


    char* sender = (char*) malloc(11);
    strncpy(sender, phone_start, 10);
    sender[10] = '\0';
    return sender;
}
