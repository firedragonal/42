int	ft_diagonal(int **order, int i, int j)
{
	int	k;
	int	l;

	k = 2;
	l = 0;
	while (k < B_SIZE)
	{
		while (l < B_SIZE)
		{
			if (order[i][j] == order[k][l] && !((l + j) == 3 || l == j))
			{
				printf("ft_diagonal> or: %d i:%d j: %d | or: %d k:%d, l:%d\n", order[i][j], i, j, order[k][l], k,l);
				return (1);
			}
			l++;
		}
		l = 0;
		k++;
	}
	return (0);
}

void	ft_count(int num, int *count)
{
	int	i;

	i = 0;
	while (i < B_SIZE)
	{
		if (num == i + 1)
			count[i]++;
		printf("num: %d, count[%d]: %d\n", num, i, count[i]);
		i++;
	}
}

void	ft_init_count(int *count)
{
	int	i;

	i = 0;
	while (i < B_SIZE)
	{
		count[i] = 0;
		i++;
	}
}

int	ft_check_three(int **order, int i, int *count)
{
	int	j;

	j = 0;
	if (i == 0 || i == 2)
	{
		while (j < B_SIZE)
		{
			if (order[i][j] == 3 && order[i+1][j] == 2)
				count[6]++;
			j++;
		}
	}
	else if (i == 1 || i == 3)
	{
		while (j < B_SIZE)
		{
			if (order[i][j] == 3 && order[i - 1][j] == 2)
				count[6]++;
			j++;
		}
	}


	if (count[6] > 1)
		return (1);
	return (0);
}


