#include <stdio.h>
int main()
{
    int array[5] = {21, 10, 23, 05, 85};
    int max;
    for (int i = 0; i < 5; i++)
    {
        if (array[i] > 20)
        {
            max = array[i];
            printf("%d\n", i);
        }
    }

    return 0;
}
