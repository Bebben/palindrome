/*
** ptr_fc.c for paldindrome in /home/benoit.pingris/delivery/ADM_palindrome_2016
** 
** Made by benoit pingris
** Login   <benoit.pingris@epitech.net>
** 
** Started on  Thu Jun 15 10:12:51 2017 benoit pingris
** Last update Thu Jun 15 14:58:05 2017 benoit pingris
*/

#include <stdlib.h>
#include "macro.h"
#include "pal.h"
#include "useful.h"

int	get_nb(t_info *pal, char *s)
{
  if (!s || str_isnum(s) == FAILURE)
    return (putstr(BAD_NB, ERROR));
  if ((pal->nb = atoi(s)) < 0)
    return (putstr(NEG, ERROR));
  pal->save = pal->nb;
  return (SUCCESS);
}

int	get_pal(t_info *pal, char *s)
{
  if (!s || str_isnum(s) == FAILURE)
    return (putstr(BAD_NB, ERROR));
  if ((pal->pal = atoi(s)) < 0)
    return (putstr(NEG, ERROR));
  return (SUCCESS);
}

int	get_base(t_info *pal, char *s)
{
  if (!s || str_isnum(s) == FAILURE)
    return (putstr(BAD_NB, ERROR));
  if ((pal->base = atoi(s)) < 2 || pal->base > 10)
    return (putstr(BASE_FORMAT, ERROR));
  return (SUCCESS);
}

int	get_max(t_info *pal, char *s)
{
  if (!s || str_isnum(s) == FAILURE)
    return (putstr(BAD_NB, ERROR));
  if ((pal->max = atoi(s)) < 0)
    return (putstr(NEG, ERROR));
  return (SUCCESS);
}

int	get_min(t_info *pal, char *s)
{
  if (!s || str_isnum(s) == FAILURE)
    return (putstr(BAD_NB, ERROR));
  if ((pal->min = atoi(s)) < 0)
    return (putstr(NEG, ERROR));
  return (SUCCESS);
}
