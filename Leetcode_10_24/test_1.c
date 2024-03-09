#include<stdio.h>
//#define numsSize 10000
//#define returnSize 2
//int main()
//{
//	int nums[numsSize];
//	int target;
//	int output[returnSize];
//	//int j;
//	int a = 0;
//	for (int i=0;; scanf_s("%d",&nums))
//	{
//		a++;
//	}
//	printf("%d", a);
//	//for(j=1;j<=;)
//
//	return 0;
//}
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* array = (int*)malloc(2 * sizeof(int));
    for (int i = 0; i <= numsSize; i++)
    {
        for (int j = 0; j <= numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                array[0] = i;
                array[1] = j;
                *returnSize = 2;
                return array;
            }
        }
    }
    *returnSize = 0;
    *array = NULL;
    return array;
}