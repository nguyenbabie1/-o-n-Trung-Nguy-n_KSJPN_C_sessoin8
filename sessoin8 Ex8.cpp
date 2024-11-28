#include<stdio.h>
int main()
{
	int arr[6][6]={
	 {3,0,6,2,0,6},
	 {9,0,8,2,0,8},
	 {5,6,7,8,9,1},
	{3,4,5,3,4,2},
	
	};
	
	int sum=0;
	printf("Duong cheo chinh la: ");
	for(int i =0 ;i<5; i++)
	{
		printf(" %d ",arr[i][4-i]);
		sum += arr[i][4-i];
	}
	printf("\nTong cua duong cheo chinh la: %d", sum);
	return 0;
}
