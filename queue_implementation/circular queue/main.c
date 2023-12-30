#include<stdio.h>
#include<stdlib.h>

#define maxsize  4
 int queue[maxsize], rear = 0, front = 0;

void enqueue(int item){
    queue[rear] = item;
    rear=(rear+1)%maxsize;
    printf(">>>Item added!\n");
}
int dequeue(){
    int element;
    element = queue[front];
    front=(front+1)%maxsize;
    printf("item dequeued!\n");
    return element;
}

int main(){
	    int c, item, i;
	printf("Welcome to the Queue implementation in c\n");
    printf("Type (1.Enqueue  2.Dequeue  3.Display front element  4.Display all element  5.exit): \n");
    scanf("%d", &c);

    do {
        switch (c) {
        case 1:
            if ((rear+1)%maxsize==front) {
                printf(">>>Queue is full!\n");
            } else {
                printf("Type integer to add to the queue : ");
                scanf("%d", &item);
                enqueue( item);
            }
            break;

        case 2:
            if (front == rear) {
                printf(">>>Queue is empty!\n");
            } else {
                dequeue();
            }
            break;

        case 3:
            printf(">>>The front element is %d\n", queue[front]);
            break;

        case 4:
            for (i = front; i < rear; i++) {
                printf("%d ", queue[i]);
            }
            printf("\n");
            break;

        case 5:
            exit(0);
            break;
        }
        getchar();
        getchar();
        printf("Type (1.Enqueue  2.Dequeue  3.Display front element  4.Display all element  5.exit): \n");
        scanf("%d", &c);

    } while (c != 5);
	return 0;
}