#include <stdio.h>
#include <string.h>

int main()
{
    char des_str[500], in_str[200], new_str[500];
    int len1, len2, in_pos, i, index = 0;
    printf("Enter a string:\n");
    fgets(des_str, sizeof(des_str), stdin);
    len1 = strlen(des_str);
    printf("Enter the string to be inserted:\n");
    fgets(in_str, sizeof(in_str), stdin);
    len2 = strlen(in_str);
    printf("Enter the position in which the string will be inserted = ");
    scanf("%d", &in_pos);
    if(in_pos < len1)
    {
        for(i = 0; i < in_pos; i++)
        {
            new_str[index] = des_str[i];
            index++;
        }
        for(i = 0; i < len2 - 1; i++)
        {
            new_str[index] = in_str[i];
            index++;
        }        
        for(i = in_pos; i < len1; i++)
        {
            new_str[index] = des_str[i];
            index++;
        }
    }
    else
    {
        printf("Enter corrent position!!");
    }
    new_str[index] = '\0';
    printf("The new string is:\n%s", new_str);
    return 0;
}
