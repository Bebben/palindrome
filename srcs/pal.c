/*
** pal.c for palindrome in /home/benoit.pingris/delivery/ADM_palindrome_2016
** 
** Made by benoit pingris
** Login   <benoit.pingris@epitech.net>
** 
** Started on  Thu Jun 15 16:11:03 2017 benoit pingris
** Last update Fri Jun 16 16:38:42 2017 benoit pingris
*/

#include <stdio.h>
#include "pal.h"
#include "macro.h"
#include "useful.h"

int	pal_p(t_info *pal)
{
  while (pal->it < pal->min)
    {
      pal->nb = calc_base(pal->nb, pal->base);
      ++pal->it;
    }
  while (pal->nb < change_base(pal->pal, pal->base, TO_BASE) &&
	 pal->it < pal->max)
    {
      pal->nb = calc_base(pal->nb, pal->base);
      ++pal->it;
    }
  if (pal->nb == change_base(pal->pal, pal->base, TO_BASE))
    return (SUCCESS);
  else
    return (FAILURE);
}

int	check_pal(int nb, int base)
{
  nb = change_base(nb, base, 0);
  if ((nb - revnb(nb)) != 0)
    return (FAILURE);
  return (SUCCESS);
}

int	all_pal(t_info *pal)
{
  int	i;
  int	sol;

  sol = 0;
  i = 1;
  if (check_pal(pal->pal, pal->base) == FAILURE)
    return (putstr(NOT_PAL, ERROR));
  while (i <= pal->pal)
    {
      pal->nb = i;
      pal->save = pal->nb;
      pal->nb = change_base(pal->nb, pal->base, TO_BASE);
      pal->it = DEF_IT;
      if (pal_p(pal) == SUCCESS)
	{
	  sol = 1;
	  printf(DISP_INFO, pal->save, pal->pal, pal->it, pal->base);
	}
      ++i;
    }
  printf(sol == 0 ? "no solution\n" : "");
  return (SUCCESS);
}
