void	ft_putorder(char **argc, int **order)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	//order = ft_2d_board(order);
	
	while(i < 31)
	{
		order[j][k] = argc[1][i] - '0';
		i += 2;
		k++;
		if (k == 4 && j < 4 && i < 30)
		{
			k = 0;
			j++;
		}
	}
}
