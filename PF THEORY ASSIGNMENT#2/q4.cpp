#include <stdio.h>
#include <string.h>

#define NUM_STRINGS 6
#define MAX_LEN 4

void sortString(char *str) {
    for (int i = 0; str[i]; i++) {
        for (int j = i + 1; str[j]; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    char arr[NUM_STRINGS][MAX_LEN] = {"eat", "tea", "tan", "ate", "nat", "bat"};
    char grouped[NUM_STRINGS][NUM_STRINGS][MAX_LEN] = {0};
    int used[NUM_STRINGS] = {0};
    int groupCount = 0;

    for (int i = 0; i < NUM_STRINGS; i++) {
        if (used[i]) continue;

        strcpy(grouped[groupCount][0], arr[i]);
        used[i] = 1;
        int index = 1;

        for (int j = i + 1; j < NUM_STRINGS; j++) {
            if (!used[j]) {
                char sorted1[MAX_LEN], sorted2[MAX_LEN];
                strcpy(sorted1, arr[i]);
                strcpy(sorted2, arr[j]);
                sortString(sorted1);
                sortString(sorted2);
                if (strcmp(sorted1, sorted2) == 0) {
                    strcpy(grouped[groupCount][index++], arr[j]);
                    used[j] = 1;
                }
            }
        }
        groupCount++;
    }

    printf("Grouped anagrams:\n");
    for (int i = 0; i < groupCount; i++) {
        printf("[ ");
        for (int j = 0; grouped[i][j][0] != 0; j++) {
            printf("%s ", grouped[i][j]);
        }
        printf("]\n");
    }

    return 0;
}

