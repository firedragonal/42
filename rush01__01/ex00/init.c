void	ft_init(int **board)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while(i < B_SIZE *B_SIZE)
	{
		board[j][k] = 0;
		i++;
		k++;
		if (k == 4)
		{
			k = 0;
			j++;
		}
	}
}
