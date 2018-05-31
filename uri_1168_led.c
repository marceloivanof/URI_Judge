#include <stdio.h>
#include <string.h>

int main(void){
	int cases; int leds = 0; char value[10000];
	scanf("%d\n", &cases);
	int c = 0;
	for (c = 0; c < cases; c++){
		scanf("%s", value);
		int i = 0;
		for (i = 0; i < strlen(value); i++){
			switch(value[i]){
				case '1':
					leds += 2;
					break;
				case '2':
					leds += 5;
					break;
				case '3':
					leds += 5;
					break;
				case '4':
					leds += 4;
					break;
				case '5':
					leds += 5;
					break;
				case '6':
					leds += 6;
					break;
				case '7':
					leds += 3;
					break;
				case '8':
					leds += 7;
					break;
				case '9':
					leds += 6;
					break;
				case '0':
					leds += 6;
					break;			
			}
		}
		printf("%d leds\n", leds);
		leds = 0;
	}
	return 0;
}