/*
** EPITECH PROJECT, 2022
** my_sort_params
** File description:
** day7
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
}

int my_strcmp(char const *s1, char const *s2)
{
    int i;
    for (i = 0; s1[i] == s2[i] && s1[i] != '\0'; i++);
    if (s1[i] == '\0' && s2[i] == '\0')
        return 0;
    else
        return s1[i] - s2[i];
}

int main(int ac, char **av)
{
    char *buffer;

    for (int i = 0 ; i < ac - 1;) {
        if (my_strcmp(av[i], av[i + 1]) < 0) {
            buffer = av[i];
            av[i] = av[i + 1];
            av[i + 1] = buffer;
            i = 0;
        } else
            i++;
    }
    for (int i = ac - 1; i >= 0; i--) {
        my_putstr(av[i]);
        my_putchar('\n');
    }
    return (0);
}
