#include <stdio.h>

int main()
{
    int time[100], n, quit = 1, search, total;
    printf("Input number of clients: ");
    scanf("%d", &n);
    for (int i=0; i<=n; i++)
    {
        printf("Input time of service for client #%d (in minutes): ",i);
        scanf("%d",&time[i]);
    }
    do
    {
        printf("Input index of your client: ");
        scanf("%d",&search);
        total = 0;
        for (int i=0; i<=search; i++)
        {
            total += time[i];
        }
        printf("Total time of waiting for client #%d is %d minutes.\n", search, total);
        printf("Would you like to continue? \nAnswer(yes - 1, no - 0): ");
        scanf("%d",&quit);
    } while (quit != 0);
    printf("\n");
    return 0;
}
