#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    char str[6];

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%s", str);
        int a = 0, b = 0;
        int length = strlen(str);
        for (int j = 0; j < length; j++)
        {
            if (str[j] == 'A')
            {
                a++;
            }
            else if(str[j] == 'B')
                b++;
        }
        if (a > b)
            printf("A\n");

        else
            printf("B\n");
    }
}
