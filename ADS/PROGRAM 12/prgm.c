#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *rep;
    struct node *next;
    int data;
};

struct node *heads[50], *tails[50];
static int countroot = 0;
void makeset(int x)
{
    struct node *newnode;

    newnode = (struct node *)malloc(sizeof(struct node));

    newnode->rep = newnode;
    newnode->next = NULL;
    newnode->data = x;

    heads[countroot] = newnode;
    tails[countroot] = newnode;
    countroot++;
}
struct node *find(int a)
{
    int i;
    struct node *tmp;

    for (i = 0; i < countroot; i++)
    {
        tmp = heads[i];

        while (tmp != NULL)
        {
            if (tmp->data == a)
                return tmp->rep;

            tmp = tmp->next;
        }
    }

    return NULL;
}
void unionsets(int a, int b)
{
    int i, pos = -1;
    struct node *rep1;
    struct node *rep2;
    struct node *tail2;

    rep1 = find(a);
    rep2 = find(b);

    if (rep1 == NULL || rep2 == NULL)
    {
        printf("\nElement not present");
        return;
    }

    if (rep1 == rep2)
    {
        printf("\nBoth elements are already in the same set");
        return;
    }
    for (i = 0; i < countroot; i++)
    {
        if (heads[i] == rep2)
        {
            pos = i;
            break;
        }
    }

    if (pos == -1)
        return;
    tail2 = tails[pos];
    for (i = 0; i < countroot; i++)
    {
        if (heads[i] == rep1)
        {
            tails[i]->next = rep2;
            tails[i] = tail2;
            break;
        }
    }
    {
        struct node *temp = rep2;

        while (temp != NULL)
        {
            temp->rep = rep1;
            temp = temp->next;
        }
    }
    for (i = pos; i < countroot - 1; i++)
    {
        heads[i] = heads[i + 1];
        tails[i] = tails[i + 1];
    }

    countroot--;

    printf("\nSets merged successfully");
}

int search(int x)
{
    int i;
    struct node *tmp;

    for (i = 0; i < countroot; i++)
    {
        tmp = heads[i];

        while (tmp != NULL)
        {
            if (tmp->data == x)
                return 1;

            tmp = tmp->next;
        }
    }

    return 0;
}

int main()
{
    int c, x, y, i;
    struct node *rep;

    while (1)
    {
        printf("\n\n1: Make Set");
        printf("\n2: Display Set Representatives");
        printf("\n3: Union");
        printf("\n4: Find Set");
        printf("\n5: Exit");

        printf("\nEnter your choice : ");
        scanf("%d", &c);

        switch (c)
        {
            case 1:
                printf("Enter element : ");
                scanf("%d", &x);

                if (search(x) == 1)
                    printf("\nElement already present");
                else
                    makeset(x);

                break;

            case 2:
                printf("\nThe set representatives are:\n");

                for (i = 0; i < countroot; i++)
                    printf("%d ", heads[i]->data);

                printf("\n");
                break;

            case 3:
                printf("\nEnter the two elements to union\n");

                printf("Enter first element : ");
                scanf("%d", &x);

                printf("Enter second element : ");
                scanf("%d", &y);

                unionsets(x, y);
                break;

            case 4:
                printf("Enter the value to find : ");
                scanf("%d", &x);

                rep = find(x);

                if (rep == NULL)
                    printf("\nNot present");
                else
                    printf("\nValue %d is in set %d", x, rep->data);

                break;

            case 5:
                printf("\nExiting...");
                exit(0);

            default:
                printf("\nInvalid choice");
        }
    }

    return 0;
}
         
      
     
	
	
	
	

