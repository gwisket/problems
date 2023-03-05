void moveZeroes(int* nums, int numsSize){
  unsigned numberOfZeros;
  unsigned i;

  numberOfZeros = 0;
  for (i = 0; i < numsSize; i ++) {
    if (nums[i]) {
      nums[i - numberOfZeros] = nums[i];
    } else {
      numberOfZeros ++;
    }
  }

  for (i = numsSize - numberOfZeros; i < numsSize; i ++) {
    nums[i] = 0;
  }
}

