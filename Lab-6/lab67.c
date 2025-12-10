#include <stdio.h>
int n;
int Top = -1;
int s[100];
void push(int x);
int pop();
void peep(int i);
void change(int x, int i);

void push(int x)
{
    if (Top >= n)
    {
        printf("Overflow");
        return;
    }
    s[++Top] = x;
}
int pop()
{
    if (Top == 0)
    {
        printf("Stack UnderFlow");
    }
    printf("Popped element: %d\n", s[Top]);
    Top = Top - 1;
    return s[Top+1];
}
void peep(int i)
{
    if (Top - i + 1 < 0)
    {
        printf("Stack is underFlow");
        return ;
    }
    printf("Peeped element at position %d from top: %d\n", i, s[Top - i + 1]);
}
void change(int x, int i)
{
    if (Top - i + 1 < 0)
    {
        printf("Stack is underFlow");
        return ;
    }
    s[Top - i + 1] = x;
    printf("Element at position %d from top changed to %d\n", i, x);

}
void display()
{
    if (Top == -1)
    {
        printf("Stack is empty\n");
        return;
    }
    printf("Print the element:\n");
    for (int i = Top; i >= 0; i--)
    {
        printf("Top most [%d] Element: %d\n", i, s[i]);
    }
    printf("\n");
}
void main()
{

    printf("Enter a size of stack:");
    scanf("%d", &n);
   
    while (1)
    {
        int choise,x,i;
        printf("\nEnter User Choise:\n");
        printf("Enter 1  Push Method:\n");
        printf("Enter 2  Pop Method:\n");
        printf("Enter 3  Display Method:\n");
        printf("Enter 4  Peep Method:\n");
        printf("Enter 5  change Method:\n");
        printf("Enter -1  then exit the Method:\n");

        scanf("%d", &choise);
        switch (choise)
        {

        case 1:
        
            printf("Enter an element to push: ");
            scanf("%d", &x);
            push(x);
            break;
        case 2:
            x = pop();
            break;
        case 3:
            display();
            break;
           
        case 4:
            printf("Enter a Ith Element:");
            scanf("%d", &i);
            peep(i);
            break;
        case 5:
          printf("Enter position from top to change: ");
            scanf("%d", &i);
            printf("Enter new value: ");
            scanf("%d", &x);
            change(x, i);
            break;
        case -1:
            printf("Exits");
            return;
        }
    }
}
