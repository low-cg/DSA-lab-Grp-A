#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "Saab";
    char str2[] = "aab";
    int size1 = strlen(str1);
    int size2 = strlen(str2);
    int flag = 0;
    int j = 0;
    for (int i = 0; i < size1; i++, j++)
    {
        if (str1[i] == str2[j])
        {
            if (j == size2 - 1)
            {
                flag = 1;
                printf("Substring ");
                return 0;
            }
            for (i = i + 1, j += 1; i < size1; i++, j++)
            {
                if (str1[i] == str2[j])
                {
                    if (j == size2 - 1)
                    {
                        flag = 1;
                        printf("Substring ");
                        return 0;
                    }
                }
                else
                {
                    j = -1;
                    flag = 0;
                    break;
                }
            }
        }
        else
        {
            j = -1;
            flag = 0;
        }
    }
    if (flag)
        printf("Substring ");
    else
        printf("NOT Substring");
    return 0;
}
