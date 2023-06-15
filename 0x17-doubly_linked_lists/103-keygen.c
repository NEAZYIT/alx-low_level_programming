#include <stdio.h>
#include <string.h>

void generate_key(const char *username, char *key)
{
    int i, len;
    int sum = 0;

    len = strlen(username);

    for (i = 0; i < len; i++)
        sum += username[i];

    sprintf(key, "%d", sum);
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s username\n", argv[0]);
        return 1;
    }

    char key[50];
    generate_key(argv[1], key);
    printf("%s\n", key);

    return 0;
}
