#include <stdio.h>
#include <string.h>

int
main ()
{
  int N, K, i, j, d = 0;
  char conversa[21];
  scanf ("%i", &N);

  for (i = 0; i < N; i++)
	{
	  scanf ("%i", &K);
	  char linguas[K][21];
	  for (j = 0; j < K; j++)
		scanf ("%s", linguas[j]);
	  strcpy (conversa, linguas[0]);
	  for (j = 0; j < K; j++)
		{
		  if (strcmp (linguas[j], conversa))
			strcpy (conversa, "ingles");
		}
	  printf ("%s\n", conversa);

	}
  return 0;
}
