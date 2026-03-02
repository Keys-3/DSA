#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int *prefix;
    int size;
} NumArray;
NumArray* numArrayCreate(int* nums, int numsSize) {
    NumArray* obj = (NumArray*)malloc(sizeof(NumArray));
    obj->size = numsSize;
    obj->prefix = (int*)malloc(sizeof(int) * numsSize);
    obj->prefix[0] = nums[0];
    for(int i = 1; i < numsSize; i++) {
        obj->prefix[i] = obj->prefix[i - 1] + nums[i];
    }

    return obj;
}
int sumRange(NumArray* obj, int left, int right) {
    if(left == 0)
        return obj->prefix[right];
    else
        return obj->prefix[right] - obj->prefix[left - 1];
}
void numArrayFree(NumArray* obj) {
    free(obj->prefix);
    free(obj);
}
int main() {
    int nums[] = {-2, 0, 3, -5, 2, -1};
    int size = sizeof(nums) / sizeof(nums[0]);
    NumArray* obj = numArrayCreate(nums, size);
    printf("Sum(0,2) = %d\n", sumRange(obj, 0, 2)); 
    printf("Sum(2,5) = %d\n", sumRange(obj, 2, 5)); 
    printf("Sum(0,5) = %d\n", sumRange(obj, 0, 5)); 
    numArrayFree(obj);
    return 0;
}