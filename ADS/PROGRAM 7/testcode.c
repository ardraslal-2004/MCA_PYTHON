#include <stdio.h>
#include <stdlib.h>

int count = 0;

struct node
{
    int data;
    struct node *next;
} *temp, *head = NULL, *h, *l, *sl;

void create()
{
    temp = (struct node *)malloc(sizeof(struct node));

    printf("Enter the data to the node: ");
    scanf("%d", &temp->data);

    temp->next = NULL;
}

void push()
{
    create();

    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        h = head;

        while (h->next != NULL)
        {
            h = h->next;
        }

        h->next = temp;
    }

    count++;
}

void pop()
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    l = head;

    if (head->next == NULL)
    {
        head = NULL;
    }
    else
    {
        while (l->next != NULL)
        {
            sl = l;
            l = l->next;
        }

        sl->next = NULL;
    }

    printf("Deleted element is %d\n", l->data);

    free(l);
    count--;
}

void display()
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    h = head;

    printf("Linked list elements are: ");

    while (h != NULL)
    {
        printf("%d -> ", h->data);
        h = h->next;
    }

    printf("NULL\n");
}

void search()
{
    int se, i = 0, f = 0;

    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    printf("Enter the data to be searched: ");
    scanf("%d", &se);

    h = head;

    while (h != NULL)
    {
        i++;

        if (h->data == se)
        {
            printf("Element %d is found at position %d\n", se, i);
            f++;
        }

        h = h->next;
    }

    if (f == 0)
    {
        printf("Element is not found\n");
    }
}

int main()
{
    int ch;

    do
    {
        printf("\nChoose option\n");
        printf("1) Push\n");
        printf("2) Pop\n");
        printf("3) Search\n");
        printf("4) Display\n");
        printf("5) Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                search();
                break;

            case 4:
                display();
                break;

            case 5:
                printf("Exiting...\n");
                exit(0);

            default:
                printf("Wrong Choice\n");
        }

    } while (1);

    return 0;
}

