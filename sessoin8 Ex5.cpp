#include<stdio.h>
int main()
{
	int arr[2][3]={
	{9,0,8},
	{2,0,8}};
	int tong=0;
	for(int i=0; i<2 ;i++)
	{
		for(int j = 0; j<3 ;j++)
		{
			tong+=arr[i][j];
		}
	}
	printf("Tong cac phan tu trong mang la: %d", tong);
	return 0;
}
