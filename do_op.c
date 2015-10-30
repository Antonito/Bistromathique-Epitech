/*
** do-op.c for Bistromathique in /Piscine_C_bistromathique
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Wed Oct 28 14:54:36 2015 ludovic petrenko
** Last update Fri Oct 30 19:58:55 2015 Antoine Baché
*/

#include <stdlib.h>
#include "include/my_struct.h"
#include "include/my.h"
#include "include/foo.h"

void	set_op(void (**tab)(t_token*, t_token*, int))
{
  tab[0] = &infinadd;
  tab[2] = &multinf;
  //  tab[3] = &divinf;
  //  tab[4] = &modinf;
  //  tab[5] = &powinf;
}

void		do_op(t_token **stack, t_token *op, int base)
{
  void		(**ope)(t_token*, t_token*, int);
  t_token	*token1;
  t_token	*token2;

  ope = malloc(6 * sizeof((*ope)));
  if (ope == NULL)
    my_error(ERROR_MSG);
  set_op(ope);
  token2 = *stack;
  token1 = (*stack)->next;
  ope[op->type - 3](token1, token2, base);
  clear_zero(token1->data);
  free_token(token2);
  free(op);
  *stack = token1;
}

t_token		*calc(t_list *parse)
{
  t_token	*stack;
  t_token	*token;
  t_token	*tmp;

  token = parse->first;
  stack = NULL;
  while (token != NULL)
    {
      tmp = token->next;
      if (token->type == 0)
	add_stack(&stack, token);
      else
	do_op(&stack, token, parse->base_length);
      token = tmp;
    }
  return (stack);
}
