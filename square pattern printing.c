/* Output for n = 3:
   * * *
   * * *
   * * *
*/
#include <stdio.h>

int main() {
    int size = 3;

    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            printf("* ");
        }
        printf("\n"); // Move to next line
    }

    return 0;
}