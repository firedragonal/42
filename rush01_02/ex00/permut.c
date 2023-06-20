#include <stdio.h>
#include <stdlib.h>
#define B_SIZE 4

int count(void)
{
	int	i;
	int res;

	res = 1;
	i = B_SIZE;	
	while (i >= 1)
	{
		res = res * i;
		i--;
	}
	return (res);
}
int **ft_init_permut(int **permut, int row)
{
	int i;

	i = 0;
	permut = (int **)malloc(row *sizeof(int *));
	while (i < row)
	{
		permut[i] = (int*)malloc(B_SIZE * sizeof(int));
		i++;
	}

	return (permut);
}

void	pick(int *bucket, int **permut,int *row, int n, int bucketSize, int k){
	int i, lastIndex, smallest, item;

	if (k == 0) {// 고를 것이 없으면 출력
		for (i = 0; i < bucketSize; i++)
				permut[*row][i] = bucket[i];
		(*row)++;
		return ;
	}
	
	lastIndex = bucketSize - k - 1; //picked array에서 마지막에 채워진 element의 index
	smallest = 1; //순열은 매번 전체 아이템에서 시작함

	for (item = smallest; item < n; item++) {
		int chosen = 0; //이미 뽑혔는지를 검사하기 위한 flag변수
        				//처음엔 false(0)으로 둔다.

		for (int j = 0; j <= lastIndex; j++) {
			if (bucket[j] == item) { //item이 이미 뽑힌 상태이면
				chosen = 1; //뽑힌 상태이므로 true(1)로 값을 바꾸고
				break; //멈춤
			}
		}


		if (chosen) 
			continue;

		bucket[lastIndex + 1] = item;
			pick(bucket, permut,row, n, bucketSize, k - 1);
	}
}

int main(void) {

	int	**permut;
	int *bucket;
	int row;
	int	i;
	int line;
	line = 0;

	row = count();
//	printf("%d", row);
	bucket = (int*)malloc(B_SIZE * sizeof(int));
	permut = ft_init_permut(permut, row);
	pick(bucket, permut, &line, B_SIZE + 1, B_SIZE, B_SIZE);

	for(int j = 0; j < row ;j++)
	{
		for (i = 0; i < B_SIZE; i++)
			printf("%d ", permut[j][i]);
		printf("| %d \n", j);
	}

//	free(permut);
}
