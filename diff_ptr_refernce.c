#include<stdlib.h>
#include<stdio.h>



int fun(int x, int y)
{
 
  int *p =(int*)malloc(sizeof(int)*1);
   *p= x+y;
   //p =&z;
return p;
}

/*int  fun1(int x, int y)
{
 
  int *p =(int*)malloc(sizeof(int)*1);
   int z= x+y;
   p =&z;
return &p;
}*/

int main()
{
int *a;
int (*b)(int,int);
b = &fun;
int *c =b(2,4);

printf("value of b:%d\n",*c);
 
//a = fun1(3,4);
//printf("value inside pointer:%d\n",*a);
}

