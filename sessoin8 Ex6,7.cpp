#include<stdio.h>
int main()
{
	int arr[6][6]={
	 {3,0,6,2,0,6},
	 {9,0,8,2,0,8},
	 {5,6,7,8,9,1},
	 {1,3,5,7,9},
	 {10,20,30,40,50}
	 
	};
	
	int sum=0;
	printf("Duong cheo chinh la: ");
	for(int i =0 ;i<5; i++)
	{
		printf(" %d ",arr[i][i]);
		sum += arr[i][i];
	}
	printf("\nTong cua duong cheo chinh la: %d", sum);
	return 0;
}
