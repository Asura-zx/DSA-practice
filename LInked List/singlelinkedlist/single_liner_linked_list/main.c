//linked list 
#include<stdio.h>
#include<stdlib.h>

//create structure for node
struct Node{
	int info;
	struct Node* next;
};

typedef struct Node node;

//point start node to NULL
node *start=NULL;


//inserts node at beginning 
void f_insertnode(node* i, int d){
	i=(node*)malloc(sizeof(node));
		i->next=start;
		i->info=d;
		start=i;
}
//insert node at last
void l_insertnode(node* i, int d){
	i=(node*)malloc(sizeof(node));
	node* temp=(node*)malloc(sizeof(node));
	i->next=NULL;
	i->info=d;
	temp=start;
	if (start==NULL){
		start=i;
	}

	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=i;
	//free(temp);
}
node* n_insertnode(node* i, int n, int d){
	i=(node*)malloc(sizeof(node));
	i->info=d;
	int c=1;
	if(n==1){
		i->next=start;
		start=i;
	}
	node* temp=(node*)malloc(sizeof(node));
		temp=start;
		while(c!=(n-1)){
			temp=temp->next;
			c++;
		}
		i->info=temp->info;
		temp->next=i;

	}
//delete node
int f_deletenode(int d){
	return d;
}
int l_deletenode(int d){
	return d;
}
int n_deletenode(int n, int d){
	return d;
}

//search for data
int searchnode(int n){
	return n;
}

void display(){
	node* temp;
	temp=start;
	if(start==NULL){
		printf("EMPTY LIST!\n");
	}
		while(temp->next!=NULL){
		printf("%d ", temp->info);
		temp=temp->next;
	}
		printf("%d ", temp->info);
	}



int main(){
	int data;
	int c;
	node* item;
	printf("WELCOME TO THE LINKED LIST IMPLEMENTATION IN C\n");
	scanf("%d", &c);
	do{
		switch(c){
		case 1:
			printf("Add data to add at the beginning of list: ");
			scanf("%d",&data);
			f_insertnode(item, data);
			printf("Data added!");
			break;
		case 2:
			printf("Add data to add at the end of list: ");
			scanf("%d", &data);
			l_insertnode(item, data);
			printf("Data added!");
			break;
		default:
			display();
			break;
		}
		scanf("%d", &c);
	}while(c!=0);
	return 0;
} 