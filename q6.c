#include<stdio.h>
#include<math.h>

int main(){
  int dec,bin,rem,deci,final=0;
  printf("enter the decimal number");
  scanf("%d",&dec);
  
  for(int i=dec;i>0;i/=2){
    rem=i%2;
    printf("%d",rem);
  }
  
  printf("\n");
  
  int str[10],a=0;
  printf("enter the binary number");
  scanf("%d",&bin);
  
  int j=0,read;
  for(int i=bin;i>0;i/=10){
    j = i%10;
    str[a]=str[a*10]+read;
  }
  
  for(int i=str[a];i>=0;i--){
    dec=i%10;
    final=final+dec*pow(2,--j);
  }
  
  printf("%d",final);
  
  return 0;
}
