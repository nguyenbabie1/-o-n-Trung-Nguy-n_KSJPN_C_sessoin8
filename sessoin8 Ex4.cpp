#include<stdio.h>
int main()
{
    int arr[3][4] = {
        {1, 2, 3, 5},
        {4, 6, 8, 10},
        {12, 7, 9, 18},
    };
    int max = arr[0][0];
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++) 
        {
            if(max < arr[i][j])
            {
                max = arr[i][j];
            }
        }
    }
    printf("Phan tu lon nhat la: %d\n", max);

    return 0;
}

  
