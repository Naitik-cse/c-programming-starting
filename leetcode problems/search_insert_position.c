int searchInsert(int* nums, int numsSize, int target) {
    int num=numsSize;
    int position;
    
    for(int i=0; i<num; i++){
        if(target==nums[i]){
            position=i;
            break;
        }else if(target<nums[0]){
            position=0;
            break;
        }else if(i < numsSize-1 && target>nums[i] && target<nums[i+1]){
            position=i+1;
            break;
        }else{
            position=num;
            
        }
    }
    return position;
    
}
