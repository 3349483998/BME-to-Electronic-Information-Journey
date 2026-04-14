int removeDuplicates(int* nums, int numsSize) {
    int k = 1;
    for(int fast = 1; fast < numsSize; fast++){
        if(nums[fast] != nums[fast-1]){
            nums[k++] = nums[fast];
        }
    }
    return k;
}
