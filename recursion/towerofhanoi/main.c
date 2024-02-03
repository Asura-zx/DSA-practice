/*towerA=[5,4,3,2,1]
towerB=[]
towerC=[]
print(towerA)
def hanoi(A,B,C,n):
    if n==1:
        x=A.pop()
        C.append(x)
        print(A)
        print(B)
        print(C)
        print('---')

        return C
    elif n==2:
        x=A.pop()
        B.append(x)
        print(A)
        print(B)
        print(C)
        print()
        x=A.pop()
        C.append(x)
        print(A)
        print(B)
        print(C)
        print()
        x=B.pop()
        C.append(x)
        print(A)
        print(B)
        print(C)
        print('---')

        return C
    else:
        hanoi(A,C,B,n-1)
        x=A.pop()
        C.append(x)
        print(A)
        print(B)
        print(C)
        print('---')
        hanoi(B,A,C,n-1)

        return C
print(hanoi(towerA,towerB,towerC,len(towerA)))

*/

#include <stdio.h>

void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }

    towerOfHanoi(n - 1, source, destination, auxiliary);
    printf("Move disk %d from %c to %c\n", n, source, destination);
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main() {
    int numDisks;

    printf("Enter the number of disks for Tower of Hanoi: ");
    scanf("%d", &numDisks);

    towerOfHanoi(numDisks, 'A', 'B', 'C');

    return 0;
}
