void	ft_init(int **board)
{
	int put[16] = {1, 2, 3, 4, 2, 3, 4, 1, 3, 4, 1,2,4,1,2,3};
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while(i < B_SIZE *B_SIZE)
	{
		board[j][k] = put[i];
		i++;
		k++;
		if (k == 4)
		{
			k = 0;
			j++;
		}
	}
}
