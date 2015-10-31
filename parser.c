/*
** parser.c for Bistromathique in /Piscine_C_bistromathique
** 
** Made by Antoine Baché
** Login   <bache_a@epitech.net>
** 
** Started on  Tue Oct 20 13:11:12 2015 Antoine Baché
** Last update Sat Oct 31 23:23:48 2015 Antoine Baché
*/

#include <stdlib.h>
#include "include/my.h"
#include "include/foo.h"

void	add_stack(t_token **stack, t_token *token)
{
  token->next = *stack;
  *stack = token;
}

void		prioprs(t_token **stack, t_token *token, t_list *st_list)
{
  t_token	*tmp2;

  if ((*stack) == NULL)
    {
      add_stack(stack, token);
    }
  else if (token->priority > (*stack)->priority)
    {
      add_stack(stack, token);
    }
  else
    {
      while (*stack != NULL && token->priority <= (*stack)->priority)
	{
	  tmp2 = (*stack)->next;
	  add_to_list(st_list, *stack);
	  *stack = tmp2;
	}
      add_stack(stack, token);
    }
}

void		parser(t_list *list)
{
  t_token	*stack;
  t_token	*tmp;
  t_token	*token;

  stack = NULL;
  token = list->first;
  list->first = token;
  list->last = token;
  while (token != NULL)
    {
      tmp = token->next;
      if (token->type == 0)
	add_to_list(list, token);
      else
	prioprs(&stack, token, list);
      token = tmp;
    }
  while (stack != NULL)
    {
      tmp = stack->next;
      add_to_list(list, stack);
      stack = tmp;
    }
}
