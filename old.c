/*
 * =====================================================================================
 *
 *       Filename:  old.c
 *
 *    Description:  old
 *
 *        Version:  1.0
 *        Created:  2014年05月07日 16时00分32秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  cassiopeia (), lovemax_tvfxq@126.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fun1();
void fun2();

int main()
{
  int a[5];
  int i,s;
  a[0]=a[1]=a[2]=a[4]=0;
  s=0;
  for(i=0;i<5;i++)
	s+=a[i];
  if(s==0)
     printf("sum is %d\n",s);
  fun1();
  fun2();
  return 0;
}

void fun1()
{
  int * x = malloc(10 * sizeof(int));
  x[10] = 0; 
  printf("x[10]=%d\n",x[10]);
}

void fun2()
{
 char t[20];
 int i;
 for(i=0;i<20;i++)
  t[i]=i;
 strcpy(t,t+10);
 for (i=0;i<10;i++)
   printf("%4d",t[i]);
 printf("\n");
}


