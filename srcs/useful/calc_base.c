/*
** calc_base.c for palinrome in /home/benoit.pingris/delivery/ADM_palindrome_2016
** 
** Made by benoit pingris
** Login   <benoit.pingris@epitech.net>
** 
** Started on  Fri Jun 16 15:43:39 2017 benoit pingris
** Last update Fri Jun 16 16:48:04 2017 benoit pingris
*/

#include "useful.h"
#include "macro.h"

void	set_variable(int *deci, int *resu, int *tmp, int *ret)
{
  *deci = 1;
  *resu = 0;
  *tmp = 0;
  *ret = 0;
}

void	calc_div(int *tmp, int *ret, int *nb, int *rnb)
{
  *tmp = *ret + (*nb % 10) + (*rnb % 10);
  *ret = 0;
  *nb /= 10;
  *rnb /= 10;
}

int	calc_base(int nb, int base)
{
  int	resu;
  int	tmp;
  int	ret;
  int	deci;
  int	rnb;

  rnb = revnb(nb);
  set_variable(&deci, &resu, &tmp, &ret);
  while (nb > 0)
    {
      calc_div(&tmp, &ret, &nb, &rnb);
      if (tmp >= base)
	{
	  ++ret;
	  tmp -= base;
	}
      resu = resu + (tmp * deci);
      deci *= 10;
    }
  if (ret != 0)
    resu = resu + deci;
  return (resu);
}
