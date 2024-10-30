#include <stdio.h>

int main() {
    char *slogans[] = {"buy now", "save big", "limited offer"};
    int num_slogans = 3;
    
    for (int i = 0; i < num_slogans; i++) {
        int frequency[256] = {0};  // ASCII characters count

        // Count the frequency of each character
        for (int j = 0; slogans[i][j] != '\0'; j++) {
            frequency[(int)slogans[i][j]]++;
        }

        // Display the character frequencies for each slogan
        printf("For slogan \"%s\":\n", slogans[i]);
        for (int k = 0; k < 256; k++) {
            if (frequency[k] > 0) {
                printf("'%c': %d, ", k, frequency[k]);
            }
        }
        printf("\n\n");  // Separate outputs for each slogan
    }

    return 0;
}