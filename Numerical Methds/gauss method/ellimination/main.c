/*
x1  +2x2 +x3  -x4  =-2
2x1 +3x2 -x3  +2x4 =7
x1  +x2  +3x3 -2x4 =-6
x1  +x2  +x3  +x4  =2

x1=1 x2=0 x3=-1 x4=2
*/
#include<stdio.h>
int main(){
	int n, i, j, a[5][5], k;
	printf("Type the dimension of equation(max 4): ");
	scanf("%d", &n);

	for(i=0; i<n; i++){
		for(j=0; j<=n; j++){
			printf("a[%d][%d]: ", i,j);
			scanf("%d", &a[i][j]);
			printf("%d\n", a[i][j]);
		}
	}
	//a21=a21-a11*a21/a11
	for(i=0; i<n; i++){
		for(j=0; j<=n; j++){
			k=a[i][j]
			if(i>j){
				x
			}
		}
	}
	return 0;
}