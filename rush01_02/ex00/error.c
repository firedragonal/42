#include "error_n.c"
int	error(int **order)
{
	int	i = 0;
	int	j = 0;
	int count[7] = {0,0,0,0,0,0,0}; //1,2,3,4,sum,face,face2
	while(i < B_SIZE)
	{
		ft_init_count(count);
		while(j < B_SIZE)
		{
			printf("order[%d][%d]: %d\n", i, j, order[i][j]);
			count[4]+=order[i][j];
			if (i == 0 || i == 2)
			{
				count[5] = order[i][j] + order[i+1][j];
				if(!(count[5] > 2 && count[5] <= 5))
					return (1);
			}
			ft_count(order[i][j], count);
    		if (order[i][j] == 4 && (i == 0 || i == 1))
				if (ft_diagonal(order, i, j) == 1)
					return (1);
			count[5] = 0;		
			j++;
		}
		printf("sum: %d cnt_1: %d, cnt_2: %d cnt_3: %d,cnt_4: %d, face_2: %d\n", count[4], count[0], count[1], count[2],count[3], count[6]);
		if (count[1] == 2)
			if (ft_check_three(order, i, count) == 1)
				printf("count[1]:%d, res:%d\n",count[1], ft_check_three(order,i,count));
		if (count[4] < 7 || count[4] > 10)
			return (1);
		if (count[0] > 1 || count[3] > 1 || count[1] > 3 || count[2] > 2)
			return (1);
		count[4] = 0;
		j = 0;
		count[6] = 0;
		i++;
	}
	return (0);
}
