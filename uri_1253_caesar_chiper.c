#include <stdio.h>
#include <string.h>

int main(void){
    int cases;
    scanf("%d", &cases);
    int i;
    for(i = 0; i < cases; i++){
        char first_line[50];
        int count_positions;
        scanf("%s %d", first_line, &count_positions);
        char result[50];
        int c;
        for(c = 0; c < strlen(first_line); c++){
            first_line[c] -= count_positions;
            if (first_line[c] < 65) /* < 'A' in ASCII */
                first_line[c] += 26; /* + 26 in ASCII */

            printf("%c", first_line[c]);
        }
        printf("\n");
    }       
    return 0;
}