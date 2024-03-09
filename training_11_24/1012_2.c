#include <stdio.h>  
#include <stdlib.h>  
#include <vector.h>  

// 定义快速选择函数  
int quickSelect(vector nums, int left, int right, int K) {
    if (left == right) {
        return nums[left];
    }
    int pivotIndex = left + rand() % (right - left + 1); // 随机选择一个枢轴元素  
    pivotIndex = partition(nums, left, right, pivotIndex); // 对数组进行划分  
    if (K == pivotIndex) {
        return nums[K];
    }
    else if (K < pivotIndex) {
        return quickSelect(nums, left, pivotIndex - 1, K);
    }
    else {
        return quickSelect(nums, pivotIndex + 1, right, K);
    }
}

// 定义划分函数  
int partition(vector nums, int left, int right, int pivotIndex) {
    int pivotValue = nums[pivotIndex];
    swap(nums[pivotIndex], nums[right]); // 将枢轴元素放到最右边  
    int storeIndex = left;
    for (int i = left; i < right; i++) {
        if (nums[i] > pivotValue) { // 注意这里是从大到小排序  
            swap(nums[storeIndex], nums[i]);
            storeIndex++;
        }
    }
    swap(nums[storeIndex], nums[right]); // 将枢轴元素放到正确的位置上  
    return storeIndex;
}

int main() {
    int n;
    scanf("%d", &n); // 输入序列长度  
    vector nums(n); // 定义一个数组来存储序列  
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]); // 输入序列元素  
    }
    int m;
    scanf("%d", &m); // 输入询问个数  
    while (m--) { // 处理每个询问  
        int l, r, K;
        scanf("%d%d%d", &l, &r, &K); // 输入询问的参数  
        int result = quickSelect(nums, l - 1, r - 1, K - 1); // 在指定范围内找到第K大的元素，并输出结果  
        printf("%d\n", result);
    }
    return 0;
}