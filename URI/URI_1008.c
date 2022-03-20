#include <stdio.h>

main (){
	
	int num, horas;
	float val, sal;
	scanf("%d %d %f", &num, &horas, &val);
	sal=horas*val;
	printf("NUMBER = %d\n", num);
	printf("SALARY = U$ %.2f\n", sal);
	return 0;
}
