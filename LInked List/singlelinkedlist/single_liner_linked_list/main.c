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
}
void n_insertnode(node* i, int n, int d){
	i=(node*)malloc(sizeof(node));
	i->info=d;
	int c=1;
	if(n==1){
		i->next=start;
		start=i;
	}
	else{
	node* temp=(node*)malloc(sizeof(node));
		temp=start;
		while(c!=(n-1)){
			temp=temp->next;
			c++;
		}
		i->next=temp->next;
		temp->next=i;
	}

	}
//delete node
void f_deletenode(){
	node* temp=(node*)malloc(sizeof(node));
	if(start==NULL){
		printf("list empty!");
	}
	else{temp=start;
		start=temp->next;}
}
void l_deletenode(node* i){
	node* temp;
	temp=start;
	
	if(start==NULL){
		printf("No data to delete!");
	}
	else if(temp->next==NULL){
		start=NULL;
		free(temp); 
		printf("item deleted!");

	}
	else{
		while((temp->next)->next!=NULL){
			temp=temp->next;
		}
		free(temp->next);
		temp->next=NULL;
		printf("item deleted!");
	}
}
void n_deletenode(int n, node* i){
	int c=1;
	node* temp;
	temp=start;
	if(n==1){
		f_deletenode();
		printf("item deleted!");
	}
	
	else{
		while(c!=(n-1)){
			temp=temp->next;
			c++;
		}
		if (temp->next != NULL) {
            node* toDelete = temp->next;
            temp->next = (temp->next)->next;
            free(toDelete);
            printf("item deleted!");
        } else {
            printf("Position not found for deletion!");
        }
	}
}

//search for data
void searchnode(int n, node* i){
	node* temp=(node*)malloc(sizeof(node));
	int c=0;
	
		if(start==NULL){
			printf("list EMPTY!");
		}
		else if(n==1){
			temp=start;
			printf("%d", temp->info);
		}	
	else{
		temp=start;
		c++;
		while(c!=(n-1)){
			if(temp->next==NULL){
				printf("reached the end of list!");
				exit(0);
			}
			temp=temp->next;
			c++;
		}
		printf("%d",(temp->next)->info);
	}
}


void display(){
	node* temp;
	temp=start;
	if(start==NULL){
		printf("EMPTY LIST!\n");
	}
		else{while(temp->next!=NULL){
				printf("%d ", temp->info);
				temp=temp->next;
			}
				printf("%d ", temp->info);
			}
		}



int main(){
	int data,n;
	int c;
	node* item;
	printf("WELCOME TO THE LINKED LIST IMPLEMENTATION IN C\n");
	printf("1.add item at first  2.add item at last 3.add item at nth position 4.delete first item  5.delete last item  6.delete item at nth position  7.display item  8.search item ");
	scanf("%d", &c);
	do{
		switch(c){
		case 1:
			printf("Add data to add at the beginning of list: ");
			scanf("%d",&data);
			f_insertnode(item, data);
			printf("Data added!\n");
			break;
		case 2:
			printf("Add data to add at the end of list: ");
			scanf("%d", &data);
			l_insertnode(item, data);
			printf("Data added!\n");
			break;
		case 3:
			printf("Type the position and the data to add: ");
			scanf("%d %d",&n, &data);
			n_insertnode(item, n, data);
			printf("data added!\n");
		
		break;
		case 4:
			f_deletenode();
			printf("node deleted!\n");
			break;
		case 5:
			l_deletenode(item);
			break;
		case 6:
			printf("type the position of node to delete: ");
			scanf("%d",&n);
			n_deletenode(n, item);
			break;
		case 7:
			display();
			break;
		case 8:
			printf("type the position of node to display: ");
			scanf("%d", &n);
			searchnode(n,item);
			break;
		default:
			exit(0);
			break;
		}
		printf("1.add item at first  2.add item at last 3.add item at nth position 4.delete first item  5.delete last item  6.delete item at nth position  7.display item  8.search item ");
		scanf("%d", &c);
	}while(c!=0);
	return 0;
} 