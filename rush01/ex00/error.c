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
				if (!(j == l && i != k+1 ))
					return (1);
					if (!(j == l && i + 1 != k && (i == 0 || i == 2)))
						return (1);

			}
			l++;
		}
		k++;
		l = 0;
	}
	return (0);
}

int	error(int **order)
{
	int	i = 0;
	int	j = 0;
	int	sum = 0;
	int	res = 0;
	int face = 0;
	int	cnt_1=0;
	int	cnt_4 = 0;
	int cnt_2 = 0;
	int	cnt_3 = 0;
	int	face_2 = 0;
	while(i < B_SIZE)
	{
		while(j < B_SIZE)
		{
			printf("order[%d][%d]: %d\n", i, j, order[i][j]);
			sum+=order[i][j];
			if (order[i][j] == 4)
			{
				cnt_4++;
				//res = ft_diagonal(order, i, j);
				if(res != 0)
					printf("res : %d\n", res);
					//return (1);
			}
			if (order[i][j] == 1)
			{
				cnt_1++;
				//res = ft_diagonal(order, i, j);
				if(res != 0)
					printf("res : %d\n", res);
					//return (1);
			}

			if (i == 0 || i == 2)
			{
				face = order[i][j] + order[i+1][j];
				if(!(face > 2 && face <= 5))
					return (1);
			}
			if (order[i][j] == 2)
				cnt_2++;
			if (order[i][j] == 3)
			{
				if ((i == 0 || i == 2) && order[i+1][j] == 2)
					face_2++;
				else if ((i == 1 || i == 3) && order[i-1][j] == 2)
					face_2++;
				cnt_3++;	
			}
			face = 0;		
			j++;
		}
		printf("sum: %d cnt_1: %d, cnt_2: %d cnt_3: %d,cnt_4: %d, face_2: %d\n", sum, cnt_1, cnt_2, cnt_3,cnt_4, face_2);
		if ( sum < 7 || sum > 10)
			return (1);
		if (cnt_1 > 1 || cnt_4 > 1 || cnt_2 > 3 || cnt_3 > 2 || (cnt_3 == 2 && face_2 > 1))
			return (1);
		sum = 0;
		j = 0;
		cnt_2 = 0;
		cnt_3 = 0;
		face_2 = 0;
		cnt_4 = 0;
		cnt_1 = 0;
		i++;
	}
	return (0);
}
