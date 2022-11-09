/*
** EPITECH PROJECT, 2022
** my_strlen
** File description:
** day7
*/

int my_strlen(char *str)
{
    int i;
    for (i = 0; str[i] != '\0'; i++);
    return i;
}
