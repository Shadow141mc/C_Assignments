#include <stdio.h>
#include <string.h>

int main()
{
    char string[100], substring[100];
    int len, start_pos;
    printf("Enter a string: \n");
    fgets(string, sizeof(string), stdin);
    len = strlen(string);
    printf("Enter the starting position, from which substring will be created = ");
    scanf("%d", &start_pos);
    strncpy(substring, (string + start_pos), len);
    substring[len + 1] = '\0';
    printf("The substring is:\n%s", substring);
    return 0;
}
