/*
** get_info.c for palindrome in /home/benoit.pingris/delivery/ADM_palindrome_2016
** 
** Made by benoit pingris
** Login   <benoit.pingris@epitech.net>
** 
** Started on  Thu Jun 15 16:02:35 2017 benoit pingris
** Last update Thu Jun 15 23:16:33 2017 benoit pingris
*/

#include <string.h>
#include <stdlib.h>
#include "pal.h"
#include "macro.h"
#include "useful.h"

static int	(*info_pal[6])(t_info *pal, char *s) =
{
  get_nb,
  get_pal,
  get_base,
  get_min,
  get_max
};

char		**cmd_pal()
{
  char		**tab;

  if ((tab = malloc(sizeof(char *) * (6))) == NULL)
    return (NULL);
  if (!(tab[0] = strdup(N_FLAG)) ||
      !(tab[1] = strdup(P_FLAG)) ||
      !(tab[2] = strdup(B_FLAG)) ||
      !(tab[3] = strdup(MIN_FLAG)) ||
      !(tab[4] = strdup(MAX_FLAG)))
    return (NULL);
  tab[5] = NULL;
  return (tab);
}

int		ret_free(char **d)
{
  free_tab(d);
  return (ERROR);
}

int		get_info(char **av, t_info *pal)
{
  char		**cmd;
  int		i;
  int		nb;

  if ((cmd = cmd_pal()) == NULL)
    return (ERROR);
  i = 0;
  while (av[i])
    {
      nb = 0;
      if (av[i][0] == '-')
	{
	  while (nb < 5 && strcmp(av[i], cmd[nb]) != 0)
	    ++nb;
	  if (nb < 5 && info_pal[nb](pal, av[i + 1]) == ERROR)
	    return (ret_free(cmd));
	  else if (nb >= 5)
	    return (ERROR);
	}
      ++i;
    }
  free_tab(cmd);
  return (SUCCESS);
}

