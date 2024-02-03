#include <stdio.h>

int* array;
void sort(int arre[], int f, int l){//f=0 l=10
	if(l-f>0){
		sort(arre[], 0, l/2);
		sort(arre[], l-l/2, l);
	}
}


int* merge(int arr[], int r){//takes an array and an element to merge
	int i=0;
	int* arr;
	while(arre[i]!=NULL){ 
		if(r>arre[i]){			//if arre[i]<r, add arre[i] to new array
		arr=(int*)malloc(sizeof(int));
		arr[i]=arre[i];
	}
	else{						//else add r to new array and break the loop
		arr=(int*)malloc(sizeof(int));
		arr[i]=r;
		break;
	}
	i++;
	
	}
	while(arre[i]!=NULL){ //add the rest to new array
		arr=(int*)malloc(sizeof(int));
		arr[i]=arre[i];
		i++;
	}
	return arr;

}

int main(){
	int arr[0,2,5,3,6,7,3,8,1,9];

	int i, j,k;

	//take inputs

	printf("Type the content of array: \n");
	for(i=0; i<10; i++){
		scanf("%d", &arr[i]);
	}

	sort(arr, 0, 10);
	return 0;
}