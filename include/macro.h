/*
** macro.h for palindrome in /home/benoit.pingris/delivery/ADM_palindrome_2016
** 
** Made by benoit pingris
** Login   <benoit.pingris@epitech.net>
** 
** Started on  Thu Jun 15 09:35:31 2017 benoit pingris
** Last update Fri Jun 16 16:34:24 2017 benoit pingris
*/

#ifndef MACRO_H_
# define MACRO_H_

/*
** ERROR MANAGEMENT STRING
*/
# define INV_ARG "invalid argument\n"
# define NOT_PAL "Your number isn't a palindrome.\n"
# define BAD_NB "Bad number format.\n"
# define USAGE "./palindrome -n number -p palindrome "	\
  "[-b base] [-imin i] [-imax i]\n"
# define NEG "Number must be positive.\n"
# define HELP "help"
# define BASE_FORMAT "Base must be between 2 and 10.\n"

#define NO_SOLUTION "no solution\n"
# define DISP_INFO "%d leads to %d in %d iteration(s) in base %d\n"

# define N_FLAG "-n"
# define P_FLAG "-p"
# define B_FLAG "-b"
# define MIN_FLAG "-imin"
# define MAX_FLAG "-imax"

# define DEF_BASE 10
# define DEF_MIN 0
# define DEF_MAX 100
# define DEF_NB -1
# define DEF_PAL -1
# define DEF_IT 0

# define TO_BASE 0
# define TO_10 1

# define SUCCESS 0
# define ERROR 84
# define FAILURE 1

#endif /* !MACRO_H_ */
