#include <stdio.h>
#include <stdlib.h>


//for some reason using it caused major execution delay..should investigate...
/*
#ifdef _WIN32
#define clear system("cls")
#define pause system("pause")

#else 
#define clear system("clear")
#define pause system("read -n 1 -s -p \"\"")

#endif
*/
struct list{
	int info;
	struct list *next;
};

/*alternatively
	struct node{
	...
	};
	struct node *start;
*/

typedef struct list node;
node *start, *item;
int main()
{
	node *temp;
	char c;
	int n,k;
	
	printf("THIS IS A SINGLE LINKED LIST IMPLEMENTATION IN C\n\n");
	printf("1. insert-at-beginning  2. insert-at-end  3. insert-at-nth-position  4. delete-front  5. delete-end  6. delete-nth-node  7. exit\n");
	printf("Type the operation: ");
	c=getchar()-'0';
	getchar();

	do{
		switch(c){
			case 1:
				item=(node*)malloc(sizeof(node));
				printf("Type the integer to insert: ");
				scanf("%d",&(item->info));
				
					item ->next=start;
					start=item;
				
				printf(">>>>added item at the beginning !\n");
				break;

			case 2:
				
				item=(node*)malloc(sizeof(node));
				item->next=NULL;
				temp=start;
				printf("Enter the integer: ");
				scanf("%d",&item->info);
				if (start==NULL){
					start=item;
					item->next=NULL;
				}
				while(temp->next!=NULL){
					temp=temp->next;
				}
				temp->next=item;
				printf(">>>>item added at last!\n");
				break;
			case 3:
				item=(node*)malloc(sizeof(node));
				temp=start;
				printf("Enter the position(starting from 1) and information: ");
				scanf("%d %d",&n, &item->info);//
				if(n==1){
					item->next=start;
					start=item;//if used start-> next, next item points to start and next node of start points to item creating infinte loop
				}
				else{
					k=1;
					while(temp!=NULL && k<n-1){
						temp=temp->next;
						k++;
					}
					if (temp==NULL){
						fprintf(stderr, "reached the end of list\n");
						free(temp);
					}
					else{
						item->next=temp->next;//temp->next node<-item
						temp->next=item;// temp->item->next node
					}
				}
				printf(">>>>item added at %d position!\n",n);
				break;
			case 4:
				
			case 8:
				temp=start;
				k=0;
				printf("###########  ");
				do{
					printf("%d ", temp->info);
					//printf("loop started");
					temp=temp->next;

				}while(temp!=NULL);
				printf("\n\n");
				break;
			default:
				printf("\ndefault statement\n");
				break;
		}


	getchar();
	printf("1. insert-at-beginning  2. insert-at-end  3. insert-at-nth-position  4. delete-front  5. delete-end  6. delete-nth-node  7. exit\n");
	printf("Type the opearation: ");
	c=getchar()-'0';
	}while(c!=7);
	return 0;
}