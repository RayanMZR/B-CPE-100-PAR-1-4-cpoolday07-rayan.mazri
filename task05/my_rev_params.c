/*
** EPITECH PROJECT, 2022
** my_rev_params
** File description:
** day7
*/

#include <unistd.h>

void my_putchar1(char c)
{
    write(1, &c, 1);
}

void my_putstr1(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar1(str[i]);
}

int main(int ac, char **av)
{
    for (int i = ac - 1; i >= 0; i--) {
        my_putstr1(av[i]);
        my_putchar1('\n');
    }
    return 0;
}
