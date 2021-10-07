#include <stdio.h>
int main()
{
    int a, b, c;
    int array[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter a number \n");
        scanf("%d", &array[i]);
    }
    for (a = 0; a < 5; a++)
    {
        for (b = 0; b < 5; b++)
        {
            if (array[a] > array[b])
            {
                c = array[a];
                array[a] = array[b];
                array[b] = c;
            }
        }
        
    }
    printf("arranging the given number in asscending order is: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", array[i]);
    }
    
    

return 0;
}