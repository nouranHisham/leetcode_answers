

void moveZeroes(int* nums, int numsSize){
    
    int i,j,temp;
    
    for(i=0; i<numsSize; i++){
        
        for(j=0; j<numsSize-i-1; j++){
            
            if(nums[j]==0){
                
                temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
            }
        }
    }

}
