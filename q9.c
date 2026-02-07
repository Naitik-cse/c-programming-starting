#include<stdio.h>

int main(){
  int num;
  printf("enter the number of scores\n");
  scanf("%d",&num);
  
  int score[num];
  
  for(int i=0;i<num;i++){
    printf("enter score\n");
    scanf("%d",&score[i]);
  }
  
  for(int i=0;i<num;i++){
    if(score[i]>=99){
      printf("first occurrance is at position %d\n",i);
      break;
    }
  }
  
  return 0;
}
