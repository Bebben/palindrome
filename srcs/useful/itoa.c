/*
** itoa.c for palindrome in /home/benoit.pingris/delivery/ADM_palindrome_2016
** 
** Made by benoit pingris
** Login   <benoit.pingris@epitech.net>
** 
** Started on  Thu Jun 15 14:15:57 2017 benoit pingris
** Last update Fri Jun 16 10:04:29 2017 benoit pingris
*/

#include <stdlib.h>

char	*my_itoa(int nb)
{
  int	len;
  int	tmp;
  char	*s;

  tmp = nb;
  len = 0;
  while (tmp > 0)
    {
      tmp /= 10;
      ++len;
    }
  if ((s = malloc(sizeof(char) * (len + 1))) == NULL)
    return (NULL);
  s[len] = '\0';
  while (len--)
    {
      s[len] = nb % 10 + '0';
      nb /= 10;
    }
  return (s);
}
