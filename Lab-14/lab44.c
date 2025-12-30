// Write a program to perform addition of two polynomial equations using appropriate data structure.
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int coff;
    int exp;
    struct node *link;
};

struct node *insertAtLast(struct node *first)
{
    int a, b;
    printf("Enter the value of coefficient: ");
    scanf("%d", &a);
    printf("Enter the value of exponent: ");
    scanf("%d", &b);

    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->coff = a;
    newnode->exp = b;
    newnode->link = NULL;

    if (first == NULL)
    {
        return newnode;
    }
    struct node *save = first;
    while (save->link != NULL)
    {
        save = save->link;
    }
    save->link = newnode;
    return first;
}

void displayAll(struct node *first)
{
    if (first == NULL)
    {
        printf("Polynomial is empty.\n");
        return;
    }

    struct node *save = first;
    while (save != NULL)
    {
        printf("%dx^%d", save->coff, save->exp);
        if (save->link != NULL)
            printf(" + ");
        save = save->link;
    }
    printf("\n");
}

struct node *addPolynomial(struct node *p1, struct node *p2)
{
    struct node *result = NULL;
    struct node *last = NULL;

    while (p1 != NULL && p2 != NULL)
    {
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        newnode->link = NULL;

        if (p1->exp == p2->exp)
        {
            newnode->coff = p1->coff + p2->coff;
            newnode->exp = p1->exp;
            p1 = p1->link;
            p2 = p2->link;
        }
        else if (p1->exp > p2->exp)
        {
            newnode->coff = p1->coff;
            newnode->exp = p1->exp;
            p1 = p1->link;
        }
        else
        {
            newnode->coff = p2->coff;
            newnode->exp = p2->exp;
            p2 = p2->link;
        }

        if (result == NULL)
        {
            result = last = newnode;
        }
        else
        {
            last->link = newnode;
            last = newnode;
        }
    }
    return result;
}


void main()
{
    struct node *first1 = NULL;
    struct node *first2 = NULL;
    struct node *sum = NULL;

    int n1, n2;

    printf("Enter the number of nodes in polynomial equation 1 : ");
    scanf("%d", &n1);
    for (int i = 0; i < n1; i++)
    {
        first1 = insertAtLast(first1);
    }
    printf("Linked list is for polynomial equation-1 : \n");
    displayAll(first1);

    printf("Enter the number of nodes in polynomial equation 2 : ");
    scanf("%d", &n2);
    for (int i = 0; i < n2; i++)
    {
        first2 = insertAtLast(first2);
    }
    printf("Linked list is for polynomial equation-2 : \n");
    displayAll(first2);

    sum = addPolynomial(first1, first2);
    printf("Sum of two polynomials : \n");
    displayAll(sum);
}
 