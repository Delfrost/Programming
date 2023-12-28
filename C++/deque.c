#include <stdio.h>
#include <stdlib.h> // For dynamic memory allocation

int size;
int *deque; // Pointer to dynamically allocated deque
int front = -1;
int rear = -1;

void RearInsertion() {
    int data;
    if ((front == 0 && rear == size - 1) || (front == rear + 1)) {
        printf("Overflow error");
        return;
    } else if (front == -1) {
        front = 0;
    } else if (rear == size - 1) {
        rear = 0;
    }
    ++rear;
    printf("Enter data:");
    scanf("%d", &data);
    deque[rear] = data;
}

void RearDeletion() {
    if (front == -1) {
        printf("Underflow Error");
        return;
    } else if (front == rear) {
        rear = front = -1;
    } else if (rear == 0) {
        rear = size - 1;
    }
    rear--;
}

void FrontInsertion() {
    int data1;
    if ((front == 0 && rear == size - 1) || (front == rear + 1)) {
        printf("Overflow Error");
        return;
    } else if (front == -1) {
        front = rear = 0;
    } else if (front == 0) {
        front = size - 1;
    }

    --front;
    printf("Enter data:");
    scanf("%d", &data1);
    deque[front] = data1;
}

void FrontDeletion() {
    if (front == -1) {
        printf("Underflow Error");
        return;
    } else if (front == rear) {
        rear = front = -1;
    } else if (front == size - 1) {
        front = 0;
    }
    front++;
}

void peekFront() {
    if (front == -1) {
        printf("Underflow Error");
    } else {
        printf("The element is %d:", deque[front]);
    }
}

void peekRear() {
    if (front == -1) {
        printf("Underflow Error");
    } else {
        printf("The element is %d:", deque[rear]);
    }
}

void display()
{
    if (front == -1)
    {
        printf("Underflow...!\n");
        return;
    }

    int i = front;
    printf("Queue elements: ");
    if (front <= rear)
    {
        while (i <= rear)
        {
            printf("%d ", deque[i]);
            i++;
        }
    }
    else
    {
        while (i < size)
        {
            printf("%d ", deque[i]);
            i++;
        }
        i = 0;
        while (i <= rear)
        {
            printf("%d ", deque[i]);
            i++;
        }
    }
    printf("\n");
}

int main() {
    printf("Enter the size of queue:");
    scanf("%d", &size);
    
    // Dynamically allocate memory for the deque
    deque = (int *)malloc(size * sizeof(int));

    while (1) {
        int choice;
        printf("\n1. Rear Insertion\n2. Front Deletion\n3. Peek Front\n4. Peek Rear\n5. Front Insertion\n6. Rear Deletion\n7. Display");
        printf("\nEnter your choice:\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                RearInsertion();
                break;
            case 2:
                FrontDeletion();
                break;
            case 3:
                peekFront();
                break;
            case 4:
                peekRear();
                break;
            case 5:
                FrontInsertion();
                break;
            case 6:
                RearDeletion();
                break;
            case 7:
                display();
                break;
            default:
                printf("Invalid choice...!\n");
                break;
        }
    }

    
    free(deque);

    return 0;
}
