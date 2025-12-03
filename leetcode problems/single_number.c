int singleNumber(int* nums, int numsSize) {
    
    int num=numsSize;
    int count=0;
    
    for(int i=0; i<num; i++){
        count=0;
        for(int j=0; j<num; j++){
            if(nums[i]==nums[j]){
                count++;
            }
        }if(count==1){
            printf("%d",nums[i]);
            return nums[i];
        }
    }
    return 0;
}
