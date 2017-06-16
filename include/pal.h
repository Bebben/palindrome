/*
** pal.h for palindrom in /home/benoit.pingris/delivery/ADM_palindrome_2016
** 
** Made by benoit pingris
** Login   <benoit.pingris@epitech.net>
** 
** Started on  Thu Jun 15 09:41:16 2017 benoit pingris
** Last update Thu Jun 15 16:57:27 2017 benoit pingris
*/

#ifndef PAL_H_
# define PAL_H_

# include "struct.h"

int	get_nb(t_info *, char *);
int	get_base(t_info *, char *);
int	get_pal(t_info *, char *);
int	get_max(t_info *, char *);
int	get_min(t_info *, char *);

int	search_pal(t_info *);
int	find_pal(t_info *);
int	all_pal(t_info *);

int	check_opt(char **);

int	get_info(char **, t_info *);

void	set_struct(t_info *);

char	**cmd_pal();

#endif /* !PAL_H_ */
