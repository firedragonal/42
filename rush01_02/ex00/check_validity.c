int is_safe(int **grid, int row, int col, int num) {
	int i;
	int j;
    
	i = 0;
	while (i < 4)
	{
    	if (grid[row][i] == num || grid[i][col] == num)
        	return 0;
    	i++;
	}
	return 1;
}
