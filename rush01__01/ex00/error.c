int	ft_diagonal(int **order, int i, int j)
{
	int	k;
	int	l;

	k = 0;
	l = 0;
	while (order[k])
	{
		while(order[k][l])
		{
			if (order[i][j] == order[k][l])
			{
				if (!(j == l && (i != k+1 || i + 1 != k)))
					return (1);
			}
			l++;
		}
		k++;
		l = 0;
	}
	return (0);
}

int	sum(int **order)
{
	int	i = 0;
	int	j = 0;
	int	sum = 0;
	int	res = 0;
	int face = 0;
	int	cnt_41 = 0;
	int cnt_2 = 0;
	int	cnt_3 = 0;
	while(order[i])
	{
		while(order[i][j])
		{
			sum+=order[i][j];
			if (order[i][j] == 4 || oder[i][j] == 1)
			{
				cnt_41++;
				res = ft_diagonal(order, i, j);
				if(res != 0)
					return (1);
			}
			if (i == 0 || i == 2)
			{
				face = order[i][j] + order[i+1][j];
				if(!(face > 2 && face <= 5))
					return (1);
			}
			if (order[i][j] == 2)
				cnt_2++;				
			j++;
		}
		if ( sum < 7 || sum >10)
			return (1);
		if (cnt_41 > 1 || cnt_2 > 3)
			return (1);
		sum = 0;
		j = 0;
		cnt_2 = 0;
		cnt_41 = 0;
		i++
	}
	return (0);
}
