/*
** revnb.c for palindrome in /home/benoit.pingris/delivery/ADM_palindrome_2016
** 
** Made by benoit pingris
** Login   <benoit.pingris@epitech.net>
** 
** Started on  Thu Jun 15 13:43:03 2017 benoit pingris
** Last update Fri Jun 16 15:42:47 2017 benoit pingris
*/

#include <stdlib.h>
#include <string.h>
#include "pal.h"
#include "useful.h"
#include "macro.h"

int	revnb(int nb)
{
  int	rev;

  rev = 0;
  while (nb != 0)
    {
      rev *= 10;
      rev += nb % 10;
      nb /= 10;
    }
  return (rev);
}

int	my_pow(int nb, int pow)
{
  int	tmp;

  tmp = nb;
  if (pow < 0)
    return (0);
  if (pow == 0)
    return (1);
  while (pow > 1)
    {
      nb *= tmp;
      --pow;
    }
  return (nb);
}

int	change_base(int nb, int base, int mode)
{
  int	new;
  int	i;

  i = 0;
  new = 0;
  if (mode == 0)
    {
      if ((nb == 0))
	return (nb);
      return ((nb % base) + 10 * (change_base(nb / base, base, 0)));
    }
  else
    {
      while (nb != 0)
	{
	  new += (nb % 10) * my_pow(base, i);
	  ++i;
	  nb /= 10;
	}
      return (new);
    }
}
