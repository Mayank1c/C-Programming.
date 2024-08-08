#include <stdio.h>
#include <stdlib.h>

/* Single node will look as follows
Declaring Structure Variables with Structure definition */
struct node {
    struct node *prev;
    int n;
    struct node *next;
} *h, *temp, *temp1, *temp2, *temp4;

/* Declaring All methods */
void insert1();

void insert2();

void insert3();

void traversebeg();

void traverseend(int);

void sort();

void search();

void updatelink();

void delete();

/* counter for number of Node*/
int count = 0;

void main()
{
    int ch;

    h = NULL;
    temp = temp1 = NULL;

    printf("\n 1 - Insert at beginning");
    printf("\n 2 - Insert at end");
    printf("\n 3 - Insert at position i");
    printf("\n 4 - Delete at i");
    printf("\n 5 - Display from beginning");
    printf("\n 6 - Display from end");
    printf("\n 7 - Search for element");
    printf("\n 8 - Sort the list");
    printf("\n 9 - Update an element");
    printf("\n 10 - Exit");

    while (1)
    {
        printf("\n Enter choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
                insert1();
                break;
            case 2:
                insert2();
                break;
            case 3:
                insert3();
                break;
            case 4:
                delete ();
                break;
            case 5:
                traversebeg();
                break;
            case 6:
                temp2 = h;
                if (temp2 == NULL)
                    printf("\n Error : List empty to display ");
                else
                {
                    printf("\n Reverse order of linked list is : ");
                    traverseend(temp2->n);
                    printf("\n");
                }
                break;
            case 7:
                search();
                break;
            case 8:
                sort();
                break;
            case 9:
                updatelink();
                break;
            case 10:
                exit(0);
            default:
                printf("\n Wrong choice menu");
        }
    }
}

/* TO create an empty node */
void create()
{
    int data;

    /* allocates requested size of bytes and returns a void pointer pointing to the
    first byte of the allocated space ,so cast it to struct node * */

    temp = (struct node *) malloc(1 * sizeof(struct node));
    temp->prev = NULL;
    temp->next = NULL;
    printf("\n Enter value to node : ");
    scanf("%d", &data);
    temp->n = data;
    count++;
}

/*  TO insert at beginning */
void insert1()
{
    if (h == NULL)
    {
        create();
        h = temp;
        //reserve the address of temp node so we can add node at the end
        temp1 = h;
    }
    else
    {
        create();
        temp->next = h;
        h->prev = temp;
        h = temp;
    }
}

/* To insert at end */
void insert2()
{

    if (h == NULL)
    {
        create();
        h = temp;
        temp1 = h;
    }
    else
    {
        create();
        temp1->next = temp;
        temp->prev = temp1;
        temp1 = temp;
    }
}

/* To insert at any position */
void insert3()
{
    int pos, i = 2;

    printf("\n Enter position to be inserted : ");
    scanf("%d", &pos);
    temp2 = h;

    if ((h == NULL) && (pos != 1))
    {
        printf("\n Empty list cannot insert other than 1st position");
        printf("\n");
        return;
    }
    if ((pos < 1) || (pos > count + 1))
    {
        printf("\n Position out of range to insert");
        printf("\n");
        return;
    }
    if ((h == NULL) && (pos == 1))
    {
        create();
        h = temp;
        temp1 = h;
        return;
    }
    else
    {

        if (pos == 1)
        {
            insert1();
        }
        else
        {
            if (pos == count + 1)
            {
                insert2();
                return;
            }
            else
            {
                if (pos > count + 1)
                {
                    printf("\n Position out of range to insert");
                    printf("\n");
                
                }
            }
        }
    }
}