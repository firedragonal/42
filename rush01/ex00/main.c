//add Alphan's header

#define B_SIZE 4
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include "ftlib.c"
#include "malloc_free.c"
#include "order.c"
#include "search.c"
#include "error.c"
//#include "test.c"
#include "validate_order.c"
#include "init.c"

int	 call_error(void)
{
	int		i;
	char	*error = "Error";
	
	i = 0;
	while (error[i])
		ft_putchar(error[i++]);
	return (0);
}

int	main(int argv, char **argc)
{
	int		len;
	int		i;
	int	**order;
	int	**board;
	int	res;
	
	i = 0;
	if (argv != 2)
		return(call_error());
	len = ft_strlen(argc[1]);
	if (len/2 != B_SIZE*B_SIZE -1)
		return (call_error());
	order = ft_2d_board(order);
	while (i < len)
	{
		if (!(argc [1][i] >= '1' && argc[1][i] <= B_SIZE + '0'))
			return(call_error());
		if (argc[1][i + 1] != 32 && i + 1 < len - 1)
			return (call_error());
		i += 2;
	}
	ft_putorder(argc, order);
	board = ft_2d_board(board);
//	res = error(order);
	if (res == 1)
		return (call_error());
//	search(board, order);
	ft_init(board);
	printf("%d   row1 \n",check_row(board, order, 0));
	printf("%d   row2\n",check_row(board, order, 1));
	printf("%d   row3\n",check_row(board, order, 2));
	printf("%d   row4\n",check_row(board, order, 3));
	printf("%d   col1\n", check_col(board, order, 0));
	printf("%d   col2\n", check_col(board, order, 1));
	printf("%d   col3\n", check_col(board, order, 2));
	printf("%d   col4\n", check_col(board, order, 3));
//	backtracking(order, board, 0);
	for(i = 0; i < B_SIZE; i++)
	{
		for(int j =0 ; j < B_SIZE; j++)
			printf("%d,", board[i][j]);
		printf("\n");
	}
	
	// now start to check special cases
	return (0);
}
