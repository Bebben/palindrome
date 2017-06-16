/*
** disp.c for palindrome in /home/benoit.pingris/delivery/ADM_palindrome_2016
** 
** Made by benoit pingris
** Login   <benoit.pingris@epitech.net>
** 
** Started on  Thu Jun 15 13:30:58 2017 benoit pingris
** Last update Thu Jun 15 14:00:26 2017 benoit pingris
*/

#include <unistd.h>
#include <string.h>
#include "macro.h"

int	putstr(char *s, int ret)
{
  write(1, s, strlen(s));
  return (ret);
}

int	str_isnum(char *s)
{
  int	i;

  i = 0;
  while (s[i])
    {
      if (!(s[i] >= '0' && s[i] <= '9'))
	return (FAILURE);
      ++i;
    }
  return (SUCCESS);
}
