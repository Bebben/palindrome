/*
** useful.h for palindrome in /home/benoit.pingris/delivery/ADM_palindrome_2016
** 
** Made by benoit pingris
** Login   <benoit.pingris@epitech.net>
** 
** Started on  Thu Jun 15 10:16:59 2017 benoit pingris
** Last update Fri Jun 16 15:46:35 2017 benoit pingris
*/

#ifndef USEFUL_H_
# define USEFUL_H_

# include "struct.h"

char	*my_itoa(int);

void	showtab(char **);
void	free_tab(char **);

int	my_pow(int, int);
int	change_base(int, int, int);
int	putstr(char *, int);
int	str_isnum(char *);
int	revnb(int);

int	calc_base(int, int);

#endif /* !USEFUL_H_ */
