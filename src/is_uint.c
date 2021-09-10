/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** funciton that check if a str is an unsigned int
*/

unsigned int is_uint(char *str, char delim)
{
    int i = 0;

    while (str[i] != delim) {
        if (str[i] >= '0' && str[i] <= '9')
            i++;
        else
            return (0);
    }
    return (1);
}