/*
** search_pal.c for palindrome in /home/benoit.pingris/delivery/ADM_palindrome_2016
** 
** Made by benoit pingris
** Login   <benoit.pingris@epitech.net>
** 
** Started on  Thu Jun 15 14:06:29 2017 benoit pingris
** Last update Fri Jun 16 16:38:10 2017 benoit pingris
*/

#include <stdio.h>
#include <stdlib.h>
#include "macro.h"
#include "struct.h"
#include "useful.h"

int	search_pal(t_info *pal)
{
  pal->save = pal->nb;
  pal->nb = change_base(pal->nb, pal->base, TO_BASE);
  while (pal->it < pal->min)
    {
      pal->nb = calc_base(pal->nb, pal->base);
      ++pal->it;
    }
  while ((pal->nb - revnb(pal->nb)) != 0 && pal->it < pal->max)
    {
      pal->nb = calc_base(pal->nb, pal->base);
      ++pal->it;
    }
  if (pal->nb - revnb(pal->nb) == 0)
    return (SUCCESS);
  else
    return (FAILURE);
  return (SUCCESS);
}

int	find_pal(t_info *pal)
{
  if (search_pal(pal) == SUCCESS)
    {
      if ((pal->nb = change_base(pal->nb, pal->base, TO_10)) == -FAILURE)
	return (ERROR);
      printf(DISP_INFO, pal->save, pal->nb, pal->it, pal->base);
    }
  else
    printf(NO_SOLUTION);
  return (SUCCESS);
}
