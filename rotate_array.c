void rotate(int* nums, int numsSize, int k){
    
    int i,temp;
    int count = k;
    
    for(i=0; i<numsSize/2; i++){
        
        temp = nums[i];
		nums[i] = nums[numsSize - i - 1];
		nums[numsSize - i - 1] = temp;
    }
    
    k %= numsSize;
    
    for(i = 0; i < k/2; i++)
	{
		temp = nums[i];
		nums[i] = nums[k - i - 1];
		nums[k - i - 1] = temp;
		
	}


	for(i = k; i < (numsSize - k) / 2 + k ; i++)
	{
		temp = nums[i];
		nums[i] = nums[numsSize - i + k - 1];
		nums[numsSize - i + k - 1] = temp;
	}


}
