#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM_CATEGORIES 5
#define MAX_MSG_LENGTH 100

typedef struct {
    int category;
    char message[MAX_MSG_LENGTH];
} Message;


void update_categories() {
    time_t start_time = time(NULL);
    time_t update_interval = 60;
    time_t next_update = start_time + update_interval;
    while (1) {

        time_t current_time = time(NULL);
        if (current_time >= next_update) {
            update_categories();
            next_update += update_interval;
        }


        for (int i = 0; i < NUM_CATEGORIES; i++) {
            for (int j = 0; j < num_messages; j++) {
                if (messages[j].category == i) {
                    printf("Category %d: %s\n", i, messages[j].message);
                }
            }
        }
        sleep(1);
    }

    return 0;
}
