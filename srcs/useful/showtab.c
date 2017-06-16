/*
** showtab.c for palindrome in /home/benoit.pingris/delivery/ADM_palindrome_2016
** 
** Made by benoit pingris
** Login   <benoit.pingris@epitech.net>
** 
** Started on  Thu Jun 15 10:15:22 2017 benoit pingris
** Last update Thu Jun 15 13:36:03 2017 benoit pingris
*/

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "pal.h"

void	showtab(char **tab)
{
  int	i;

  i = 0;
  while (tab[i])
    {
      write(1, tab[i], strlen(tab[i]));
      write(1, "\n", 1);
      ++i;
    }
}

void	show_struc(t_info *pal)
{
  printf("nb : %d\npal : %d\nbase : %d\n", pal->nb, pal->pal, pal->base);
  printf("min : %d\nmax : %d\n", pal->min, pal->max);
}
