/*
** requirement.c for palindrome in /home/benoit.pingris/delivery/ADM_palindrome_2016
** 
** Made by benoit pingris
** Login   <benoit.pingris@epitech.net>
** 
** Started on  Thu Jun 15 09:25:47 2017 benoit pingris
** Last update Fri Jun 16 14:56:46 2017 benoit pingris
*/

int	my_factrec_synthesis(int nb)
{
  if (nb < 0 || nb >= 13)
    return (0);
  if (nb == 0)
    return (1);
  else
    return (nb *  my_factrec_synthesis(nb - 1));
}

int	my_squareroot_synthesis(int nb)
{
  int	i;

  i = 0;
  while (i <= nb)
    {
      if (i * i == nb)
	return (i);
      ++i;
    }
  return (-1);
}
