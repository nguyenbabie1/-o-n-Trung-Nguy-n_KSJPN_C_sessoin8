#include<stdio.h>
int main()
{
	int arr[6]={9,0,8,2,0,8};
	int number;
	printf("Nhap so can tim: ");
	scanf("%d", &number);
	
	for(int i = 0; i<6 ;i++)
	{
		if(arr[i] == number)
		{
			printf("\n Vi tri phan tu trong mang la: %d",i);
			break;
		}
		else
		{
			printf("\n Phan tu khong co trong mang ");
			break;
		}
		
	}
	
	return 0;
}
