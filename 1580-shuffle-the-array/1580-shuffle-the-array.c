

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
     int* result = (int*)malloc(numsSize * sizeof(int));
    
    // Iterate over the first half (x1, x2, ..., xn) and second half (y1, y2, ..., yn)
    for (int i = 0; i < n; i++) {
        result[2 * i] = nums[i];        // Place x1, x2, ..., xn at even indices
        result[2 * i + 1] = nums[i + n]; // Place y1, y2, ..., yn at odd indices
    }
    
    // Return the size of the new array
    *returnSize = numsSize;
    
    // Return the new array
    return result;
}