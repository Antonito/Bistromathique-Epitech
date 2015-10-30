/*
** powinf.c for Bistromathique in /Piscine_C_bistromathique
** 
** Made by arthur arnaud
** Login   <arnaud_e@epitech.net>
** 
** Started on  Wed Oct 28 00:31:01 2015 arthur arnaud
** Last update Fri Oct 30 20:04:04 2015 Antoine Baché
*/

char	*result_pow(int i)
{
  char	*res;

  if (res = malloc(2) == NULL)
    return (NULL);
  res[0] = i + 1;
  res[1] = '\0';
  return (res);
}

char	*powinf(t_token *nb1, t_token *pow)
{
  char	*result;
  char	*tmp;

  if (pow->sign != 1 && pow->data[0] != 2 && my_strlen(pow->data) != 1)
    return (result_pow(0));
  else if (pow->sign != 1 && pow->data[0] == 2 && my_strlen(pow->data) == 1)
    return (result_pow(1));
  if (tmp = malloc((my_strlen(nb1->data) * 2) + 1) == NULL)
    return (NULL);
  if (result = malloc(my_strlen(tmp) + 2 + 1))
    return (NULL);
  result[0] = 2;
  result[1] = '\0';
  while (pow->data[0] == 1 && my_strlen(pow->data) != 1)
    {
      if (my_strcmp(divinf(b, result_pow(2)), result_pow(1)) == 0)
	{
	  result = multinf(result, tmp);
	}
      tmp = multinf(tmp, tmp);
      pow->data = divinf(pow->data, result_pow(2));
    }
  return (result);
}
