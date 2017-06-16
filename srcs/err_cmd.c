/*
** err_cmd.c for palindrome in /home/benoit.pingris/delivery/ADM_palindrome_2016
** 
** Made by benoit pingris
** Login   <benoit.pingris@epitech.net>
** 
** Started on  Thu Jun 15 16:51:53 2017 benoit pingris
** Last update Fri Jun 16 10:31:27 2017 benoit pingris
*/

#include <string.h>
#include <stdlib.h>
#include "useful.h"
#include "macro.h"
#include "pal.h"

int	is_multiple(int *flag)
{
  int	i;

  i = 0;
  if (flag[0] >= 1 && flag[1] >= 1)
    return (FAILURE);
  while (i < 5)
    {
      if (flag[i] > 1)
	return (ERROR);
      ++i;
    }
  free(flag);
  return (SUCCESS);
}

int	multiple_flag(char **tab)
{
  int	*flag;
  char	**cmd;
  int	i;
  int	j;

  i = 0;
  if ((flag = malloc(sizeof(int) * 6)) == NULL ||
      (cmd = cmd_pal()) == NULL)
    return (ERROR);
  while (i < 5)
    flag[i++] = 0;
  i = 0;
  while (tab[i])
    {
      j = 0;
      while (j < 5 && strcmp(tab[i], cmd[j]) != 0)
	++j;
      if (j < 5)
	++flag[j];
      ++i;
    }
  free_tab(cmd);
  return (is_multiple(flag));
}

int	n_or_p(char **tab)
{
  int	i;
  int	check;

  i = 0;
  check = 0;
  while (tab[i])
    {
      if (strcmp(tab[i], N_FLAG) == 0 ||
	  strcmp(tab[i], P_FLAG) == 0)
	++check;
      if (check == 2)
	return (ERROR);
      ++i;
    }
  return (SUCCESS);
}

int	check_opt(char **tab)
{
  if (n_or_p(tab) == FAILURE ||
      multiple_flag(tab) == FAILURE)
    return (ERROR);
  return (SUCCESS);
}
