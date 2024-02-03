/*
x= 1		2		4		5		7
y= 1		1.14	1.732	7 		2.6
*/
#include <stdio.h>
#include<stdlib.h>
int main()
{
	int i, j;
	float x[5], y[5], xp, yp, p;
	printf("Enter data:\n");
	for (i = 0; i < 5; ++i)
	{
		printf("x[%d]:", i+1);
		scanf("%f", &x[i]);
		printf("y[%d]:", i+1);
		scanf("%f", &y[i]);
	}
	printf("Enter xp: ");
	scanf("%f", &xp);
	yp=0;
	for(i=0; i<5; i++){
		p=1;
	
	for(j=0; j<5; j++){
		if(i!=j){
			p=p*((xp-x[j])/(x[i]-x[j]));
		}
		yp=yp+p*y[i];
	}
}
	printf("%f\n",yp );
	return 0;
}