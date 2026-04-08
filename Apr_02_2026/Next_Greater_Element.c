#include <stdio.h>
int* nextGreaterElement(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int stack[1000], top = -1;
    int nextGreater[10001];
    for (int i = 0; i <= 10000; i++) {
        nextGreater[i] = -1;
    }
    for (int i = 0; i < nums2Size; i++) {
        while (top >= 0 && nums2[i] > stack[top]) {
            nextGreater[stack[top]] = nums2[i];
            top--;
        }
        stack[++top] = nums2[i];
    }
    static int result[1000];
    for (int i = 0; i < nums1Size; i++) {
        result[i] = nextGreater[nums1[i]];
    }
    return result;
}
int main() {
    int nums1[] = {4,1,2};
    int nums2[] = {1,3,4,2};
    int n1 = 3, n2 = 4;
    int* ans = nextGreaterElement(nums1, n1, nums2, n2);
    for (int i = 0; i < n1; i++) {
        printf("%d ", ans[i]);
    }
    return 0;
}