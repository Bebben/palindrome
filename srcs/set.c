/*
** set.c for palindrome in /home/benoit.pingris/delivery/ADM_palindrome_2016
** 
** Made by benoit pingris
** Login   <benoit.pingris@epitech.net>
** 
** Started on  Thu Jun 15 09:38:07 2017 benoit pingris
** Last update Thu Jun 15 16:23:06 2017 benoit pingris
*/

#include "macro.h"
#include "struct.h"

void	set_struct(t_info *pal)
{
  pal->base = DEF_BASE;
  pal->min = DEF_MIN;
  pal->max = DEF_MAX;
  pal->nb = DEF_NB;
  pal->pal = DEF_PAL;
  pal->save = DEF_NB;
  pal->it = DEF_IT;
}
