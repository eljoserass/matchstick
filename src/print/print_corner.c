/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** print the bottom and up corner box
*/

#include "matchstick.h"

void print_corner(int size)
{
    for (int i = 0; i <= (size *2); i++)
        my_putchar('*');
    my_putchar('\n');
}