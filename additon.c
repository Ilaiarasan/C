#include<stdio.h>                            //header file
int d;                                       //global variable declaration
int main()                                   //main funnction
{
  int a,b,c,sum;                             //local variable declaration
  printf("adition of 3 numbers\n");          //print statement
  scanf("%d%d%d",&a,&b,&c);                 //input statement
  sum=a+b+c;                            
  printf("%d\n",sum);                       //print statement
  printf("%d\n",d);                         //global variable declaration
  return 0;                                 //return statement
}
