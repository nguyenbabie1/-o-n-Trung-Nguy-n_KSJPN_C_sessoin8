#include<stdio.h>
int main()
{
	int arr[6] = { 9,0,8,2,0,8};
	printf("Mang ban dau : ");
	for(int i=0; i<5 ; i++)
	{
		printf(" %d ",arr[i]);
	}
	printf("\nMang nguoc lai : ");
	for(int i = 4; i>=0 ; i--)
	{
		printf(" %d ",arr[i]);
		
	}
	return 0;
}
