/*
** main.c for palindrome in /home/benoit.pingris/delivery/ADM_palindrome_2016/srcs
** 
** Made by benoit pingris
** Login   <benoit.pingris@epitech.net>
** 
** Started on  Thu Jun 15 09:35:08 2017 benoit pingris
** Last update Fri Jun 16 19:22:47 2017 benoit pingris
*/

#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include "pal.h"
#include "useful.h"
#include "macro.h"
#include "gnl.h"

int		disp_help()
{
  char		*s;
  int		fd;

  if ((fd = open(HELP, O_RDONLY)) == -FAILURE)
    return (ERROR);
  while ((s = get_next_line(fd)))
    {
      write(1, s, strlen(s));
      write(1, "\n", 1);
      free(s);
    }
  if (close(fd) == -FAILURE)
    return (ERROR);
  return (SUCCESS);
}

int		main(int ac, char **av)
{
  t_info	pal;

  (void)ac;
  if (av[1] && strcmp(av[1], "-h") == 0)
    return (disp_help());
  set_struct(&pal);
  if (check_opt(av) == ERROR ||
      get_info(av, &pal) == ERROR ||
      pal.min > pal.max)
    return (putstr(INV_ARG, ERROR));
  if (pal.nb != DEF_NB)
    return (find_pal(&pal));
  else if (pal.pal != DEF_PAL)
    return (all_pal(&pal));
  return (putstr(INV_ARG, ERROR));
}

