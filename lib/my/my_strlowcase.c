/*
** EPITECH PROJECT, 2021
** my_strlowcase
** File description:
** my_strlowcase
*/

char *my_strlowcase(char *str)
{
    for (int i = 0 ; str[i] != '\0' ; i++) {
        if ('A' <= str[i] && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }
    return (str);
}
