// Sort characters in a string by frequency (Bubble Sort)
#include <stdio.h>

int main() {
    char s[100];
    int freq[100] = {0};
    int visited[100] = {0};
    int n = 0;

    printf("Enter String: ");
    scanf("%s", s);

    while (s[n] != '\0') n++;

    for (int i = 0; i < n; i++) {
        if (visited[i])
            continue;

        int count = 0;
        for (int j = 0; j < n; j++) {
            if (s[i] == s[j]) {
                count++;
                visited[j] = 1;
            }
        }
        freq[i] = count;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (freq[j] < freq[j + 1]) {
                int tempFreq = freq[j];
                freq[j] = freq[j + 1];
                freq[j + 1] = tempFreq;

                char tempChar = s[j];
                s[j] = s[j + 1];
                s[j + 1] = tempChar;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (freq[i] > 0) {
            for (int j = 0; j < freq[i]; j++) {
                printf("%c", s[i]);
            }
        }
    }

    return 0;
}
