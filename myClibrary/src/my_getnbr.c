/*
** EPITECH PROJECT, 2021
** lib
** File description:
** funciton that convert a str in a int
*/

int my_getnbr(char *str, char delim)
{
    int result = 0;
    int sign = 1;
    int i = 0;

    if (str[0] == '-') {
        sign = -1;
        i += 1;
    }
    while (str[i] != delim) {
        result = result * 10 + str[i] - '0';
        i++;
    }
    return (result * sign);
}