#include <stdio.h>
#include <string.h>

int main(void)
{
	int cases; char word[1000]; char reverse[1000];
	scanf("%d", &cases);
	int i;
	for(i = 0; i < cases; i++){
		scanf(" %[^\n]", word);
		int c;
		for(c = 0; c < strlen(word); c++){
			if(word[c] >= 65 && word[c] <= 90 || word[c] >= 97 && word[c] <= 122){
				word[c] += 3;
			}
		}
        int size_word = strlen(word) - 1;
		c = 0;
        while(size_word >= 0){
			reverse[c] = word[size_word];
			size_word--;
            c++;
		}
        reverse[c] ='\0';
        for(c = 0; c < strlen(word); c++){
            if(c >= strlen(word)/2){
                reverse[c]--;
            }
            printf("%c", reverse[c]);
        }
        printf("\n");
	}
	return 0;
}