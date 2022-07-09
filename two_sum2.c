/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
    
    int size = 2;
    
    int *result = malloc((size)*sizeof(int));
    
    int i,j;    
    
     for(i=0; i<numbersSize; i++){
        
        for(j=i+1; j<numbersSize; j++){
            
            if(numbers[i]+numbers[j]==target){
                
                result[0] = i+1;
                result[1] = j+1;
                break;

            }
        }
    }
    
    *returnSize = 2;
    return result;

}
