#include <stdio.h>

int canHear(int freq) {
    if (freq >= 67 && freq <= 45000) {
        return 1; // Binary can hear the frequency
    } else {
        return 0; // Binary cannot hear the frequency
    }
}

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    int frequencies[T];
    for (int i = 0; i < T; i++) {
        scanf("%d", &frequencies[i]); // Read the frequencies for each test case
    }

    for (int i = 0; i < T; i++) {
        if (canHear(frequencies[i])) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
