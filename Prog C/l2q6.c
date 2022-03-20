#include <stdio.h>

int main() {

	int h1, m1, h2, m2;
	int total1, total2, dif;

	scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
	total1 = h1*60 + m1;
	total2 = h2*60 + m2;

	if(total1 > total2) 
		total2 += 24*60;
	dif = total2 - total1;

	printf("%d h %d min\n", dif/60, dif%60); 
	return 0;
}

