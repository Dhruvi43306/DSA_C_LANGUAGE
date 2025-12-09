#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<time.h>
void main()
{
    int N;

    printf("Enter a Character in Words:");
    scanf("%d", &N);
    char word[N+1];
    printf("Enter a Word:\n");
    scanf("%s", word);
    
    srand(time(0)); 
    int number = rand() % N;
    printf("Random Number:%d\n", number);
    printf("Random character:%c\n", word[number]);

    char name[50], temp;

    printf("Enter a String:\n");
    scanf("%s", &name);

    char str[50];
    strcpy(str, name);
    int len = strlen(name);
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (name[j] > name[j + 1])
            {
                temp = name[j];
                name[j] = name[j + 1];
                name[j + 1] = temp;
            }
        }
    }
    printf("Sorted string: %s\n", name);
    if (strcmp(str, name)==0)
    {
        printf("Aenagram\n");
    }
    else
    {
        printf("Not aenagram\n");
    }
}
