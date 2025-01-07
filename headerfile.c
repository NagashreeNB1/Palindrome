#include<stdio.h>
#include<String.h>
#define MUL(a,b)    a*b
#define ADD(a,b)    a+b
#define SUB(a,b)    a-b
#define DIV(a,b)    a/b
#define mod(a,b)   a%b

int main()
{
   printf("Multiplication: %d\n", MUL(3, 10));
   printf("Addition:%d\n",ADD(4,5));
   printf("Subtration:%d\n",SUB(5,3));
   printf("Division:%d",DIV(6,2));
   printf("Modulus:%d",mod(6,2));
   return 0;
}