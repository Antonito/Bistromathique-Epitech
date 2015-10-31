/*
** free_token.c for Bistromathique in /Piscine_C_bistromathique
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Wed Oct 28 19:36:02 2015 ludovic petrenko
** Last update Sat Oct 31 13:52:31 2015 Antoine Baché
*/

#include <stdlib.h>
#include "include/foo.h"

void	free_token(t_token *token)
{
  free(token->data);
  free(token);
}
