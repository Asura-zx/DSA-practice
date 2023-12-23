#include <stdio.h>
#include <stdlib.h>
int main()
{
    int maxsize = 10, stack[maxsize], item, i = -1, k;
    char c;
    printf("WELCOME TO THE STACK IMPLEMENTATION IN C");
    printf("\nType( 1.PUSH   2.POP   3.Display all elements   4.Display top element   5.exit ):--\n");
    c = getchar() - '0'; // beacuse appearently this works because the ASCII values for numeric characters are consecutive. works only for integers
    getchar();
    while (c != 5) {
        k = 0;
        switch (c) {
        case 1:
            if (i == maxsize - 1) {
                printf(">>>>>The stack is full!\n");
            } else {
                printf("Type the item to push: ");
                scanf("%d", &item);
                printf(">>>>>[%d] pushed!", item);
                i++;
                stack[i] = item;
            }
            break;
        case 2:
            if (i == -1) {
                printf(">>>>>The stack is empty!\n");
            } else {
                item = stack[i];
                i--;
                printf(">>>>>Item popped: [ %d ]\n", item);
            }
            break;
        case 3:
            if (i == -1) {
                printf(">>>>>Stack empty!\n");
            } else {
                printf(">>>>> [");
                for (k = 0; k <= i; k++) {
                    printf("%d ", stack[k]);
                }
                printf(" ]");
            }
            break;
        case 4:
            if (i == -1) {
                printf(">>>>>Stack empty!\n");
            } else {
                printf(">>>>>Top element: %d\n", stack[i]);
            }
            break;
        case 5:
            exit(0);
            break;
        }
        getchar();
        printf("\n----------------------------------------------------------------------------------------------\n");
        printf("Type( 1.PUSH   2.POP   3.Display all elements   4.Display top element   5.exit ):--\n");
        c = getchar() - '0';
    }
    return 0;
}
