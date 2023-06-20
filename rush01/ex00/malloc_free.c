
int	**ft_2d_board(int **board)
{
	int	i;

	i = 0;
	board = (int **)malloc((B_SIZE)  * sizeof(int *));
	while(i < B_SIZE)
	{
		board[i] = (int *)malloc(B_SIZE * sizeof(int));
		i++;
	}
	return (board);
}

void	free_2d_board(int **board)
{
	int	i;
	
	i = 0;
	while(i <B_SIZE)
	{
		free(board[i]);
		i++;
	}
	free(board);
}
