#include <stdio.h>
#include <stdlib.h>


void bainary_decimal();
void decimal_bainary();
void hexadecimal_decimal();
void decimal_hexadecimal();

int main(void)
{
  int a,b,c,d,sw,flag=1;
  
  //while(flag == 1){
    printf("========================================\n");
    printf("~ Baisic menu ~\n");
    printf("b: 2進数\n");
    printf("h: 16進数\n");
    printf("e: 終了\n");
    printf("========================================\n");
    printf("Input character: ");
    scanf("%s",&a);
    printf("\n");
    
    switch(a){
      
    case 'b':
      {
       printf("========================================\n");
       printf("~ Binary menu ~\n");
       printf("1: 2進数から10進数\n");
       printf("2: 10進数から2進数\n");
       printf("3: 終了\n");
       printf("========================================\n");
       printf("Input number: ");
       scanf("%d",&b);
     
     switch(b){
     
     case 1: bainary_decimal();
       break;
       
     case 2: decimal_bainary();
       break;

     case 3:printf("\n");
            break;
       
       }
     break;
     }
      
 
    case 'h':
      {
      printf("========================================\n");
       printf("~ Hexadecimal menu ~\n");
       printf("1: 16進数から10進数\n");
       printf("2: 10進数から16進数\n");
       printf("3: 終了\n");
       printf("========================================\n");
       printf("Input number: ");
      scanf("%d",&d);
       
      switch(d){
     
        case 1:hexadecimal_decimal();
      break;
      
        case 2:decimal_hexadecimal();
      break;

        case 3:printf("\n");
            break;
      
      }
       break;
       }

    case 'e':break;
      
    default:
      break;
    }
  
  return 0;
}


void bainary_decimal()
{
  int bi;
  int de = 0;
  int base = 1;

  printf("2進数 = ");
  scanf("%d",&bi);

  while(bi > 0){
    de = de+(bi%10)*base;
    bi = bi/10;
    base = base*2;
    }
  printf("10進数 = %d\n\n",de);
}

void decimal_bainary()
{
 int i, de;
 int n=0;
  int bi[32];

  printf("10進数 = ");
  scanf("%d",&de);

  for(i=0; de>0; i++){
    bi[i] = de%2;
    de = de/2;
  }
  printf("2進数 = ");
  while(i > 0){
    if(i%4==0){
      printf(" ");
    }
    printf("%d",bi[--i]);
    n++;
  }
  printf("\n\n"); 
}

void hexadecimal_decimal()
{
  int he;
  char data[30];

  printf("16進数 = ");
  scanf("%s",data);

  he = strtol(data,NULL,16);

  printf("10進数 = %d\n\n",he);
}

void decimal_hexadecimal()
{
  int de;
  printf("10進数 = ");
  scanf("%d",&de);
  printf("16進数 = %x\n\n",de);
}
