/*
** my_strncmp.c for Bistromathique in /Piscine_C_bistromathique/lib/my
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Mon Oct  5 14:11:50 2015 ludovic petrenko
** Last update Fri Oct 30 21:32:57 2015 Antoine Baché
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (j == 0 && s1[i] && s2[i] && i < n)
    {
      if (s1[i] != s2[i])
	j = s1[i] - s2[i];
      i = i + 1;
    }
  return (j);
}
