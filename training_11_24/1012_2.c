#include <stdio.h>  
#include <stdlib.h>  
#include <vector.h>  

// �������ѡ����  
int quickSelect(vector nums, int left, int right, int K) {
    if (left == right) {
        return nums[left];
    }
    int pivotIndex = left + rand() % (right - left + 1); // ���ѡ��һ������Ԫ��  
    pivotIndex = partition(nums, left, right, pivotIndex); // ��������л���  
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

// ���廮�ֺ���  
int partition(vector nums, int left, int right, int pivotIndex) {
    int pivotValue = nums[pivotIndex];
    swap(nums[pivotIndex], nums[right]); // ������Ԫ�طŵ����ұ�  
    int storeIndex = left;
    for (int i = left; i < right; i++) {
        if (nums[i] > pivotValue) { // ע�������ǴӴ�С����  
            swap(nums[storeIndex], nums[i]);
            storeIndex++;
        }
    }
    swap(nums[storeIndex], nums[right]); // ������Ԫ�طŵ���ȷ��λ����  
    return storeIndex;
}

int main() {
    int n;
    scanf("%d", &n); // �������г���  
    vector nums(n); // ����һ���������洢����  
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]); // ��������Ԫ��  
    }
    int m;
    scanf("%d", &m); // ����ѯ�ʸ���  
    while (m--) { // ����ÿ��ѯ��  
        int l, r, K;
        scanf("%d%d%d", &l, &r, &K); // ����ѯ�ʵĲ���  
        int result = quickSelect(nums, l - 1, r - 1, K - 1); // ��ָ����Χ���ҵ���K���Ԫ�أ���������  
        printf("%d\n", result);
    }
    return 0;
}