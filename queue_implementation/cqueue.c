#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c, maxsize = 10, queue[maxsize], item, rear = -1, front = 0, i;
    system("clear");
    printf("Welcome to the Queue implementation in c\n");
    printf("Type (1.Enqueue  2.Dequeue  3.Display front element  4.Display all element  5.exit): \n");
    scanf("%d", &c);

    do {
        switch (c) {
        case 1:
            if (rear >= maxsize) {
                printf(">>>Queue is full!\n");
            } else {
                rear++;
                printf("Type integer to add to the queue : ");
                scanf("%d", &item);
                queue[rear] = item;
                printf(">>>Item added!\n");
            }
            break;

        case 2:
            if (front > rear) {
                printf(">>>Queue is empty!\n");
            } else {
                item = queue[front];
                front++;
            }
            break;

        case 3:
            printf(">>>The front element is %d\n", queue[front]);
            break;

        case 4:
            for (i = front; i <= rear; i++) {
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
        system("clear");
        printf("Type (1.Enqueue  2.Dequeue  3.Display front element  4.Display all element  5.exit): \n");
        scanf("%d", &c);

    } while (c != 5);

    return 0;
}
