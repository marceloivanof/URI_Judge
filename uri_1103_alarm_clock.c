#include <stdio.h>

int main(void){
	int h1, h2, m1, m2;
	do{
		scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
		if((h1+m1+h2+m2) == 0)
			break;

		if((h2 < h1) || (h2 == h1 && m1 > m2))
			h2 = ((h2 + 24)*60) + m2;
		else
			h2 = (h2 * 60) + m2;

        h1 = (h1 * 60) + m1;
		printf("%d\n", (h2 - h1));
	}while(1);
	return 0;
}