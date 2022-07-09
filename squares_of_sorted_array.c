/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize){
    
    int *result = malloc(numsSize*sizeof(int));
    int i,j,temp;
    
    for(i=0; i<numsSize; i++){
            result[i] = ((nums[i])*nums[i]); 
    }
    
    for(i=0;i<numsSize;i++){
            for(j=0;j<numsSize-i-1;j++){
                if(result[j]>result[j+1]){
                    temp=result[j];
                    result[j]=result[j+1];
                      result[j+1]=temp;
                      }
        
            }
    }
    
    *returnSize = numsSize;
    return result;

}
