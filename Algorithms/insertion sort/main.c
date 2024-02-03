
#include<stdio.h>

void swap(int* x, int* y){
	int k;
	 k=*x;
	 *x=*y;
	 *y=k;
}

int main()
{
	int arr[10];

	int  i, j,k;

	//take inputs

	printf("Type the content of array: \n");
	for(i=0; i<10; i++){
		scanf("%d", &arr[i]);
	}

	//insertion sort

	for(i=0; i<=10; i++){
		for (int j = i; j < 10; j++)
		{
			if(arr[i]>arr[j]){
				swap(&arr[i], &arr[j]);
			}
		}
	}

	//print the result array
	for(i=0; i<10; i++){
		printf("%d", arr[i]);
	}
	return 0;
}